class Solution {
public:
    int secondsBetweenTimes(string startTime, string endTime) {
        int hours_to_sec_start=stoi(startTime.substr(0,2));
        int hours_to_sec_end=stoi(endTime.substr(0,2));
        int mins_to_sec_start=stoi(startTime.substr(3,2));
        int mins_to_sec_end=stoi(endTime.substr(3,2));
        int sec_start=stoi(startTime.substr(6,2));
        int sec_end=stoi(endTime.substr(6,2));
        int total_sec_start= (hours_to_sec_start*3600) + (mins_to_sec_start*60) +sec_start;
        int total_sec_end=(hours_to_sec_end*3600) + (mins_to_sec_end*60)+sec_end;
        return total_sec_end-total_sec_start;



        
        
    }
};