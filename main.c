#include<stdio.h>
#include<math.h>

int main(){
    int OPmenu, OPmenuLog, LogName, Password, OPmenuADM;
    String newName, Name;

    printf( "\n------------------------------------------\n"
            "-------------  MENU PRINCIPAL  -----------\n"
            "------------------------------------------\n"
            "---------------  1. USER -----------------\n"
            "------------- 2. ADMINISTRATOR -----------\n"
            "--------------   3 - EXIT  ---------------\n"
            "------------------------------------------\n");

    scanf("%d", &OPmenu);

    if (OPmenu == 1) || (OPmenu == 2) || (OPmenu == 3)
    {
        
        switch (OPmenu)
        {
        case 1:
            
                printf( "\n------------------------------------------\n"
                        "--------------- MENU - USER --------------\n"
                        "------------------------------------------\n"
                        "---------  1. LOGIN REGISTRATION ---------\n"
                        "----------------  2. LOGIN ---------------\n"
                        "---------  3. PASSWORD RECOVERY ----------\n"
                        "------------------------------------------\n");

                scanf("%d", &OPmenuLog);

                if(OPmenuLog == 1) || (OPmenuLog == 2) || (OPmenuLog == 3){
                    switch (OPmenuLog)
                    {
                    case 1:
                        printf("\nName :\n");
                        scanf("%d", &newName);
                        printf("\nPassword :\n");
                        scanf("%d", &Password);
                        printf("\nSecurity question :\n");
                        scanf("%d", &Pergunta);
                        printf("\nSecurity question answer :\n");
                        scanf("%d", &resposta);                        
                        
                        break;
                    
                    case 2:
                        printf("\nName :\n");
                        scanf("%d", &Name);
                        printf("\nPassword :\n");
                        scanf("%d", &Password);

                        break;

                    case 3:
                        printf("\nName :\n");
                        scanf("%d", &Name);
                        if(Name ){

                        } else {
                            printf("ERROR : Enter an existing name\n"
                                "Or create an account\n");
                        }

                        break;
                    }

                } else { printf("ERROR : Enter a valid value"); }
            
        break;
        
        case 2:

        printf( "------------------------------------------\n"
                "---------------  MENU - ADM  -------------\n"
                "------------------------------------------\n"
                "---------   1 - ADM REGISTRATION  --------\n"
                "------------------------------------------\n"
                "-------------  2 - ADM LOGIN -------------\n"
                "------------------------------------------\n");
        
        scanf("%d", OPmenuADM);
        
                if(OPmenuADM == 1) || (OPmenuADM == 2) {
                    switch (OPmenuADM)
                    {
                    case 1:
                        printf("\nName :\n");
                        scanf("%d", &Name);
                        printf("\nPassword :\n");
                        scanf("%d", &Password);
                        
                        break;
                    
                    case 2:
                        printf("\nName :\n");
                        scanf("%d", &Name);
                        printf("\nPassword :\n");
                        scanf("%d", &Password);

                        break;

                    }

                } else { printf("ERROR : Enter a valid value"); }

        break;

        case 3 : 
        break;
        } 

    } else {printf("ERROR : Enter a valid value");}


}
