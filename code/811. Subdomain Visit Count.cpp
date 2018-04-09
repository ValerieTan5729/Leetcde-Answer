// First Solution (Runtime: 26ms)
class Solution {
public:
    vector<string> subdomainVisits(vector<string>& cpdomains) {
        vector<string> result;
        map<string, int> domains;
        int num = cpdomains.size();
        for (int i = 0; i < num; i++) {
            string number = cpdomains[i].substr(0, cpdomains[i].find_first_of(" "));
            int times = atoi(number.c_str());
            int len = cpdomains[i].length();
            int begin = number.length() + 1;
            string domain;
            for (int j = begin; j < len; j++) {
                if (cpdomains[i][j] == '.') {
                    domain = cpdomains[i].substr(begin);
                    (domains.find(domain) == domains.end()) ? (domains[domain] = times) : (domains[domain] += times);
                    begin = j + 1;
                }
            }
            domain = cpdomains[i].substr(begin);
            (domains.find(domain) == domains.end()) ? (domains[domain] = times) : (domains[domain] += times);
        }
        for (map<string, int>::iterator it = domains.begin(); it != domains.end(); it++) {
            stringstream ss;
            ss << it->second;
            result.push_back(ss.str() + " " + it->first);
        }
        return result;
    }
};

// Second Solution (Runtime: 15ms)
class Solution {
public:
    vector<string> subdomainVisits(vector<string>& cpdomains) {
        vector<string> result;
        unordered_map<string, int> domains;
        int num = cpdomains.size();
        for (int i = 0; i < num; i++) {
            int pos = cpdomains[i].find(" ");
            int times = atoi(cpdomains[i].substr(0, pos).c_str());
            string dom = cpdomains[i].substr(pos + 1, cpdomains[i].length() - pos - 1);
            for (int j = dom.length() - 1; j >= 0; j--) {
                if (j == 0) {
                    domains[dom.substr(0, dom.length())] += times;
                } else if (dom[j] == '.') {
                    domains[dom.substr(j + 1, dom.length() - j - 1)] += times;
                }
            }
        }
        for (unordered_map<string, int>::iterator it = domains.begin(); it != domains.end(); it++) {
            result.push_back(to_string(it->second) + " " + it->first);
        }
        return result;
    }
};