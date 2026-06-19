class Solution {
public:
    string frequencySort(string s) {
        int n=s.size();
        int arr[128]={};
        for(int i=0;i<n;i++){
            char ch=s[i];
            arr[ch]++;
        }

        string ans="";
        for(int i=0;i<128;i++){
            int maxcount=0;
            int highestchar=0;
            for(int i=0;i<128;i++){
                if(arr[i]>maxcount){
                    maxcount=arr[i];
                    highestchar=char(i);
                }
            }
            if(maxcount==0) break;
            for(int i=0;i<maxcount;i++){
                ans.push_back(highestchar);
            }
            arr[highestchar]=0;
        }
        return ans;
    }
};