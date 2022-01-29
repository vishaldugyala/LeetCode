class ParkingSystem {

    int bigNum;
    int mediumNum;
    int smallNum;
    
    public ParkingSystem(int big, int medium, int small) {
        bigNum = big;
        mediumNum = medium;
        smallNum = small;
    }
    
    public boolean addCar(int carType) {
        if(carType == 1 && bigNum>0)
        {
            bigNum -= 1;
            return true;
        }
        else if(carType == 2 && mediumNum>0)
        {
            mediumNum -= 1;
            return true;
        }
        else if(carType == 3 && smallNum>0)
        {
            smallNum -= 1;
            return true;
        }
        else{
            return false;
        }
    }
}

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem obj = new ParkingSystem(big, medium, small);
 * boolean param_1 = obj.addCar(carType);
 */