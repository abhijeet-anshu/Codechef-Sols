#include<cstdio>
int arr[50][50];
char str[100];
int main(void){
    int t,n,m,i,j,l;
    bool flag=false;
    scanf("%d",&t);
    while(t--){
        flag=true;
        scanf("%d%d",&n,&m);
        for(i=0;i<n;i++){
            scanf("%s",str);
        for(j=0;j<m;j++){
            if(str[j]=='F')
            arr[i][j]=9;
            else
                arr[i][j]=str[j]-'0';
        }
        }
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){

                l=arr[i][j];

                if(l==9)
                    continue;

                else if(i==0){

                    if(j==0){

                        if(l>3){
                            flag=false;
                            break;

                    }

                        else if(l==3){
                            if(arr[0][1]==9){if(arr[1][1]==9){if(arr[1][0]==9){continue;
                            }else{flag=false;break;}}else{flag=false;break;}

                            }
                        else{
                            flag=false;
                            break;
                        }
                        }
                        else if(l==2){
                            if(arr[0][1]<9 && arr[1][1]<9){
                                    flag=false;
                                    break;
                            }
                                else if(arr[0][1]<9&& arr[1][0]<9){
                                    flag=false;
                                    break;
                                }
                                else if(arr[1][0]<9 && arr[1][0]<9){
                                    flag=false;
                                    break;
                                }
                            }
                        else if(l==1){
                            if(arr[0][1]==9){
                                if(arr[1][1]==9 || arr[1][0]==9){
                                    flag=false;
                                    break;
                                }
                                //break;
                            }
                            else if(arr[1][1]==9){
                                if(arr[1][0] ==9){
                                    flag=false;
                                    break;
                                }
                                //break;
                            }
                            else if(arr[1][0]==9){
                                break;}
                            else{
                                flag=false;
                                break;
                            }
                        }
                        else if(l==0){
                            if(arr[1][1]==9 || arr[0][1]==9){
                                flag=false;
                                break;
                            }
                            else if(arr[1][0]==9){
                                flag=false;
                                break;
                            }
                        }
                    }
                    else if(j==m-1){

                        if(l>3){
                            flag=false;
                            break;

                    }

                        else if(l==3){
                            if(arr[0][m-2]<9){
                                flag=false;
                                break;
                            }
                            else if(arr[1][m-1]<9){
                                flag=false;
                                break;
                            }
                            else if(arr[1][m-1]<9){
                                flag=false;
                                break;
                            }
                            }
                        else if(l==2){
                            if(arr[0][m-2]<9 && arr[1][m-1]<9){
                                    flag=false;
                                    break;
                            }
                            else if(arr[0][m-2]<9&& arr[1][m-2]<9){
                                    flag=false;
                                    break;
                                }
                                else if(arr[1][m-1]<9 && arr[1][m-2]<9){
                                    flag=false;
                                    break;
                                }
                            }
                        else if(l==1){
                            if(arr[0][m-2]==9){
                                if(arr[1][m-1]==9 || arr[1][m-2]==9){
                                    flag=false;
                                    break;
                                }
                            }
                            else if(arr[1][m-1]==9){
                                if(arr[1][m-2] ==9){
                                    flag=false;
                                    break;
                                }
                            }
                            else if(arr[1][m-2]==9){
                                break;}
                            else{
                                flag=false;
                                break;
                            }
                        }
                        else if(l==0){
                            if(arr[1][m-1]==9 || arr[0][m-2]==9){
                                flag=false;
                                break;
                            }
                            else if(arr[1][m-2]==9){
                                flag=false;
                                break;
                            }
                        }
                    }

            }
            if(flag==false){
                break;
            }

        }
    }
}
