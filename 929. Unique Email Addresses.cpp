#include <set>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        set<string> st;

        for(string email : emails){
            string local = "", domain = "";
            int i = 0;

            // process local name
            while(email[i] != '@'){
                if(email[i] == '+') {
                    while(email[i] != '@') i++;
                    break;
                }
                if(email[i] != '.')
                    local += email[i];
                i++;
            }

            // skip '@'
            i++;

            // process domain
            while(i < email.size()){
                domain += email[i];
                i++;
            }

            st.insert(local + "@" + domain);
        }

        return st.size();
    }
};
