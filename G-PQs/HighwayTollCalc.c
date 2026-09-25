#include<stdio.h>
int cs(){
    int choice;
    printf("__NATIONAL HIGHWAY AUTHORITY__\n");
    printf("1.Log a new vehicle\n");
    printf("2.View daily Summary Report\n");
    printf("3.Exit System\n");
    printf("enter your choice(1/2/3) :");
    scanf("%d",&choice);
    return choice;

}
int fine(int spd){
    int fi=0;
    if(spd>80 && spd<=100){
        fi=50;
    }
    else if(spd>100){
        fi=50+(spd-100)*5;
    }
    return fi;
}
int dis(char np[],int rt){
    if(np[0]=='T' && np[1]=='S'){
        rt=(rt*85)/100;
        return rt;
    }
    return rt;
}


int main (){
    int n=0;
    char NPs[1000][10]={0};

    int colle[1000]={0};
    int c=0;

    int choice=0;
    choice=cs();

    while(choice!=3){
        if(choice==1){
            char np[10];
            printf("enter the number plate of the vehicle (e.g, AB-1234) :");
            scanf(" %[^\n]",np);
            printf("\n");
            for(int d=0; np[d] != '\0';d++){
                NPs[n][d]=np[d];
                NPs[n][d+1]='\0';
            }
            n++;
            char ty[2];
            printf("enter the vehicle type (e.g, C,T,M and E) : ");
            //C-car  ,T-truck   ,M-motorcycle  ,E-emergency

            scanf(" %c",ty);
            printf("\n");
            int spd;
            printf("enter the speed of the vehicle :");
            scanf("%d",&spd);
            printf("\n");
            


            

            int rt=0;

            if(ty[0]=='C'){
                int f=fine(spd);
                rt=f+5;
                colle[c]=dis(np,rt);
                c++;

            }
            else if(ty[0]=='T'){
                int f=fine(spd);
                rt=f+10;
                colle[c]=dis(np,rt);
                c++;
            }
            else if(ty[0]=='M'){
                int f=fine(spd);
                rt=f+3;
                colle[c]=dis(np,rt);
                c++;
            }
            printf("\n");
            printf("  ----vehicle processed----\n");
            printf("plate number of the vehicle %s\n",np);
            printf("vehicle type -%c",ty[0]);
            printf(" || total road tax(inc. fines and other taxes) : %d\n",colle[c-1]);
            printf("___________________________");
            printf("\n");
            printf("\n");
            choice=cs();
        }

        else if(choice==2){
            printf("number plates of vehicle processed :");
            for(int w=0; w<n ;w++){
                printf("%s", NPs[w]);
                printf(" , ");
            }
            printf("\n");
            int revenue=0;
            for(int j=0;j<n ;j++){
                revenue=revenue +colle[j];
            }
            printf("Total revenue of the day is- %d/-\n",revenue);
            printf("total vehicles processed = %d\n",n);
            choice=cs();
        }
        else if(choice == 3){
            printf("closing the system...\n");
            printf("\n");
            break;
            
        }
    }
    return 0;
}