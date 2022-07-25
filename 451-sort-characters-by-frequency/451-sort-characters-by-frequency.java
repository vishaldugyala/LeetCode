class Solution {
    public String frequencySort(String s) {
        
        Map<Character, Integer> mp = new HashMap<>();
        
        for(int i=0;i<s.length();i=i+1){
            if(mp.containsKey(s.charAt(i))){
                mp.put(s.charAt(i),mp.get(s.charAt(i))+1);
            }else{
                mp.put(s.charAt(i),1);
            }
        }
        String sol = "";
        HashMap<Character, Integer> mp2
            = mp.entrySet()
                  .stream()
                  .sorted((i1, i2)
                              -> i2.getValue().compareTo(
                                  i1.getValue()))
                  .collect(Collectors.toMap(
                      Map.Entry::getKey,
                      Map.Entry::getValue,
                      (e1, e2) -> e1, LinkedHashMap::new));
        
        StringBuilder sb = new StringBuilder();
        for(Map.Entry<Character, Integer> entry : mp2.entrySet()){
            
            sb.append(entry.getKey().toString().repeat(entry.getValue()));
        }
        return sb.toString();
    }
}