class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {

        int totalTime = 0;

        int lastM = -1;
        int lastP = -1;
        int lastG = -1;

        // Har house ka garbage collect karne ka time
        for (int i = 0; i < garbage.size(); i++) {

            totalTime += garbage[i].size();

            // Is house par M hai?
            if (garbage[i].find('M') != string::npos) {
                lastM = i;
            }

            // Is house par P hai?
            if (garbage[i].find('P') != string::npos) {
                lastP = i;
            }

            // Is house par G hai?
            if (garbage[i].find('G') != string::npos) {
                lastG = i;
            }
        }

        // Metal truck ka travel time
        for (int i = 0; i < lastM; i++) {
            totalTime += travel[i];
        }

        // Paper truck ka travel time
        for (int i = 0; i < lastP; i++) {
            totalTime += travel[i];
        }

        // Glass truck ka travel time
        for (int i = 0; i < lastG; i++) {
            totalTime += travel[i];
        }

        return totalTime;
    }
};