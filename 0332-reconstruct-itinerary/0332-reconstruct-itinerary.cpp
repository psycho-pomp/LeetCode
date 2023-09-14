class Solution {
    unordered_map <string, multiset <string>> umapTickets;
public:
    vector<string> findItinerary(vector<vector<string>>& tickets) {
        //Step 1: Build Graph
        //Step 2: Iterate through the ticket JFK -> build the iternary by using dfs
        //Step 3: Return iternary as string
        for (vector <string> ticket: tickets) {
            umapTickets[ticket[0]].insert(ticket[1]); 
        }
        vector <string> result;
        dfs (result, "JFK");
        reverse (result.begin(), result.end());
        return result;
    }
    void dfs (vector <string> &result, string source) {
        //Step 1: Iterate through the umap for the source = multiset (will need an iterator)
        //Step 2: Once traversed a destination umapTickets[source], delete that -> doesn't get stuck
        //Step 3: Pushback in result
        while (!umapTickets[source].empty()) {
            string destination=*umapTickets[source].begin();
            umapTickets[source].erase (umapTickets[source].begin());
            dfs (result, destination);
        }
        result.push_back(source);
    }    
};