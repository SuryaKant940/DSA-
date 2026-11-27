class Solution {
  public:
    long long int totalFine(int date, vector<int> &car, vector<int> &fine) {
        // code here
        long long int fines=0;
        for(int i=0;i<car.size();i++){
            if(car[i]%2!=date%2){
                fines+=fine[i];
            }
        }
        return fines;
    }
};