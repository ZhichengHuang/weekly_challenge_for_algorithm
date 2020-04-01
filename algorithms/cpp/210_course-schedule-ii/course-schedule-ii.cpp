class Solution {
public:
    bool topologicalSort(int n,vector<int> & explored,vector<int>& path,
                        unordered_map<int,vector<int>> &graph,vector<int>& result)
        {
            for(int i=0;i<graph[n].size();i++)
            {
                int prereq = graph[n][i];

                if(path[prereq])
                {
                    result.clear();
                    return false;
                }

                path[prereq] =true;
                if(!topologicalSort(prereq,explored,path,graph,result))
                {
                    result.clear();
                    return false;
                }
                path[prereq]=false;
            }
            if(!explored[n])
            {
                result.push_back(n);
            }
            explored[n]=true;
            return true;
        }
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int> result;
        vector<int> entrance(numCourses,true);

        unordered_map<int,vector<int>> graph;
        for(int i=0;i<prerequisites.size();i++)
        {
            graph[prerequisites[i][0]].push_back(prerequisites[i][1]);
            entrance[prerequisites[i][1]]=false;
        }

        vector<int> explored(numCourses,false);
        vector<int> path(numCourses,false);

        for(int i = 0;i<numCourses;i++)
        {
            if(!entrance[i] || explored[i]) continue;
            if(!topologicalSort(i,explored,path,graph,result)) return result;
        }
        for(int i = 0;i<numCourses;i++)
        {
            if(!explored[i]) return vector<int>();
        }
        return result;

    }
};