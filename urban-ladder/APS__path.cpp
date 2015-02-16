// Program for Floyd Warshall Algorithm
#include <bits/stdc++.h>
using namespace std;
map<string, int> mymap;
// Number of vertices in the graph
#define V 105
 
/* Define Infinite as a large enough value. This value will be used
  for vertices not connected to each other */
#define INF 100000000

int graph[V][V];
int path_mat[V][V];

// A function to print the solution matrix
void printSolution(int n);
 
// Solves the all-pairs shortest path problem using Floyd Warshall algorithm
void floydWarshell (int n)
{
    /* dist[][] will be the output matrix that will finally have the shortest 
      distances between every pair of vertices */
    int i, j, k;
 
    /* Initialize the solution matrix same as input graph matrix. Or 
       we can say the initial values of shortest distances are based
       on shortest paths considering no intermediate vertex. */
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            path_mat[i][j] = graph[i][j];
 
    /* Add all vertices one by one to the set of intermediate vertices.
      ---> Before start of a iteration, we have shortest path_matances between all
      pairs of vertices such that the shortest path_matances consider only the
      vertices in set {0, 1, 2, .. k-1} as intermediate vertices.
      ----> After the end of a iteration, vertex no. k is added to the set of
      intermediate vertices and the set becomes {0, 1, 2, .. k} */
    for (k = 0; k < n; k++)
    {
        // Pick all vertices as source one by one
        for (i = 0; i < n; i++)
        {
            // Pick all vertices as destination for the
            // above picked source
            for (j = 0; j < n; j++)
            {
                // If vertex k is on the shortest path from
                // i to j, then update the value of path_mat[i][j]
                if (path_mat[i][k] + path_mat[k][j] < path_mat[i][j])
                    path_mat[i][j] = path_mat[i][k] + path_mat[k][j];
            }
        }
    }
 
    // Print the shortest path_matance matrix
    // printSolution(n);
}
 
/* A utility function to print solution */
void printSolution(int n)
{
    printf ("Following matrix shows the shortest distances"
            " between every pair of vertices \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (path_mat[i][j] == INF)
                printf("%7s", "INF");
            else
                printf ("%7d", path_mat[i][j]);
        }
        printf("\n");
    }
}
 
// driver program to test above function
int main (void)
{
    /* Let us create the following weighted graph
            10
       (0)------->(3)
        |         /|\
      5 |          |
        |          | 1
       \|/         |
       (1)------->(2)
            3           */
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    int n, m;
    int a, b, d;
    string str;
    char arr[1000];
    scanf ("%d%d", &n, &m);
    for (int i=0;i<n;i++) {
      scanf("%s", arr);
      str = string (arr);
      mymap[str] = i;
    }
    for (int i=0;i<n;i++) {
      for (int j=0;j<n;j++)
        graph[i][j] = INF;
    }
    for (int i=0;i<m;i++) {
      scanf("%s", arr);
      a = mymap[(string) arr];
      scanf("%s", arr);
      b = mymap[(string) arr];
      scanf ("%d", &d);
      graph[b][a] = graph[a][b] = d;
    }
    for (int i=0;i<n;i++) {
      graph[i][i] = INF;
    }
    // printSolution(n);
    /*int graph[100][100]; = { {0,   5,  INF, 10},
                        {INF, 0,   3, INF},
                        {INF, INF, 0,   1},
                        {INF, INF, INF, 0}
                      };*/
    


    // Print the solution
    floydWarshell(n);
    scanf ("%d", &m);
    while (m--) {
      scanf("%s", arr);
      a = mymap[(string) arr];
      scanf("%s", arr);
      b = mymap[(string) arr];
      scanf ("%d", &d);
      printf("%d\n", path_mat[a][b]);
    }
    return 0;
}