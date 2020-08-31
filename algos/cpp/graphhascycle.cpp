//207. Course Schedule
class Solution {   
        
public:
    
    bool dfs(int numCourses, vector<vector<int>>& adj, int course, vector<int> * visited, list<int> * classes){
        if((*visited)[course] == -1)
            return false;
        if((*visited)[course] == 1)
            return true;
        (*visited)[course] = -1;
        for (int i : *classes) { 
            if(adj[course][i] == 1)
                if(!dfs(numCourses, adj, i, visited, classes)){
                    return false;
            }
        }
        (*visited)[course] = 1;
        return true;
        
    }
    
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        /*
          given a graph determing if it is asyclical  
            
            
        */
        
        /*
        too slow
        // adjacancy matrix
        vector<vector<int>> adj(numCourses, vector<int>(numCourses, 0));
        if(prerequisites.size() < 2)
            return true;
        
        list<int> classes;
        
        for(auto pair : prerequisites){
            adj[pair[0]][pair[1]] = 1;
            classes.push_back(pair[0]);
            classes.push_back(pair[1]);
        }
        
        
        for(auto pair : prerequisites){
            vector<int> visited(numCourses, 0);  
            if(!dfs(numCourses, adj,pair[0], &visited, &classes))
                return false;
        }
        return true;
        
        */
        
        if(prerequisites.size() < 2)
            return true;
        
        //topo sort
        // build graph
        vector<vector<int>> graph(numCourses);
        for(auto pair: prerequisites){
            graph[pair[0]].push_back(pair[1]);
        }
        // build degree vector
        vector<int> degrees(numCourses, 0);
        for(auto adj : graph)
            for(auto v : adj )
                degrees[v]++;
        
        for(int i = 0; i < numCourses; ++i){
            int j = 0;
            for(; j < numCourses; ++j){
                //check if any degrees are 0
                if(degrees[j] == 0)
                    break; 
            }
            if(j == numCourses) // all no degrees where 0 and theres a cycle
                return false;
            degrees[j]--;
            for(auto v : graph[j]){
                degrees[v]--;
            }
            
        }
        return true;
    }
};