#include <bits/stdc++.h>
#define LLU unsigned long long
const int limit = 1000005;
using namespace std;

char str[limit];
int freq[limit][4];
int req[limit][4];
LLU ans[limit][4][4];

char decode(char ch) {
    switch(ch) {
        case 'c':return 0;
        case 'h':return 1;
        case 'e':return 2;
        case 'f':return 3;
    }
    assert (false);
}
/*char rcode(char ch) {
    switch(ch) {
        case 0:return 'c';
        case 1:return 'h';
        case 2:return 'e';
        case 3:return 'f';
    }
    assert (false);
}*/

void solve() {
    scanf("%s", str);
    int i, j, k, q;
    int l = strlen(str);
    for(i=0;i<l;i++) str[i] = decode(str[i]);
    for (j=0;j<4;j++) {
        freq [l][j] =0;
    }
    for (i=l-1;i>=0;i--) {
        for (j=0;j<4;j++) freq [i][j] = freq[i+1][j];
        freq[i][str[i]] += 1;
    }

    for (j=0;j<4;j++) {
        req [0][j] = 0;
    }
        
    for (i=1;i<l;i++) {
        for (j=0;j<4;j++) req [i][j] = req[i-1][j];
        req[i][str[i-1]] += 1;
    }

    /*printf("::::c\th\te\tf\n");
    for (i=0;i<l;i++) {
        printf("%d\t", i+1);
        for (j=0;j<4;j++) printf("%d\t", freq [i][j]);// = freq[i+1][j];
        printf("\n");            
    }*/
    for (i=0;i<4;i++) {
        for (j=0;j<4;j++) ans[l][i][j] =0;
    }
    for (i=l-1;i>=0;i--) {
        for (k=0;k<4;k++) {
            for (j=0;j<4;j++) {
                ans[i][k][j] = ans[i+1][k][j];
            }
        }
        for (j=0;j<4;j++) {
            ans[i][str[i]][j] += (LLU) freq[i+1][j];
        }
        ans[i][str[i]][str[i]] = 0;
        /*printf("LINE %d\n", i+1);
        for (k=0;k<4;k++) {
            printf ("%c--c:::h:::e:::f:::\n --", rcode(k));
            for (j=0;j<4;j++) {
                printf ("%llu:::", ans[i][k][j]);
            }
            printf("\n");
        }*/
    }
    LLU diff;
    char a, b;
    scanf("%d", &q);
    while(q--) {
        scanf(" %c %c%d%d", &a, &b, &i, &j);
        i--;
        a = decode(a); b = decode(b);
        diff = (LLU)(req[j][a] - req[i][a]);
        printf("%llu\n", ans[i][a][b]-(diff * freq[j][b]+ans[j][a][b]));
    }
}

int main() {
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
        solve();
        return 0;
}
