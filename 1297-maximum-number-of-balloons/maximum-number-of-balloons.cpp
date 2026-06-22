class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char,int> mp;
        for(int i=0;i<text.size();i++){
            if(text[i]=='b') mp[text[i]]++;
            else if(text[i]=='a') mp[text[i]]++;
            else if(text[i]=='l') mp[text[i]]++;
            else if(text[i]=='o') mp[text[i]]++;
            else if(text[i]=='n') mp[text[i]]++;
        }

        int min=1000000;
        if(mp['b']/1<min) min=mp['b']/1;
        if(mp['a']/1<min) min=mp['a']/1;
        if(mp['l']/2<min) min=mp['l']/2;
        if(mp['o']/2<min) min=mp['o']/2;
        if(mp['n']/1<min) min=mp['n']/1;
        return min;
    }
};