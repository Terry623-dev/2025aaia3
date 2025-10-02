///week04-1.cpp
///LeetCode 珼驹肈 Water Bottles II
class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int ans = numBottles;///秨﹍碞耻ê或瞺
        while(numBottles >= numExchange){ ///狦瞺计 >= 传计,碞传
            numBottles = numBottles - numExchange + 1; ///传1瞺都
            ans ++; ///耻瞺
            numExchange ++; ///传夹非 瞺
        }
        return ans;

    }
};
