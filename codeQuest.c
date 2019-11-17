/*Code Quest
By Francesco Losi
Jan 18,2016
this is the whole code quest source file
*/

#include <stdio.h>
 int main(void)

{
printf("+--------------------------------+\n");
printf("|                                |\n");
printf("|           Code Quest           |\n");
printf("|                                |\n");
printf("+--------------------------------+\n");

float strength, speed, defense, intelligence, strengthratio, speedratio, defenseratio, intelligenceratio;
int luck, finaldef, finalsped, finalintel, finalstren, sum=0;

printf("Character Creation\n");
printf("Please Enter your desired stats of your character:\n");

printf("Enter Speed: ");
scanf("%f", &speed);

sum+=speed;

printf("Enter Strength: ");
scanf("%f", &strength);
sum+= strength;

printf("Enter Defense: ");
scanf("%f", &defense);
sum+=defense;

printf("Enter Intelligence: ");
scanf("%f", &intelligence);
printf("\n");
sum+=intelligence;


strengthratio=strength/sum;
defenseratio= defense/sum;
intelligenceratio=intelligence/sum;
speedratio=speed/sum;
luck= sum%30;

finaldef=  defenseratio*100;
finalsped=  speedratio*100;
finalintel=  intelligenceratio*100;
finalstren= strengthratio*100;

printf("Your players final stats are: \n");
printf("Strength: %d", finalstren);
printf("\n");

printf("Defense: %d", finaldef);
printf("\n");

printf("Intelligence: %d", finalintel);
printf("\n");

printf("Speed %d", finalsped);
printf("\n");
printf("Luck: %d", luck);
printf("\n");


//this is the beginning of the battle
int magicpower, attackpower,choice, hp=10, enemyhp=10;
float temp,enemystrength=30, enemydefense=40, enemyintelligence=25;

printf("****BATTLE START!****\n");


do {
//this first round of commands is for the player
printf("Enemy Current HP: %d \nYour Current HP %d \n", enemyhp, hp);
printf("Enter 1 To Attack or Press 2 for a Magic Attack\n");
printf("Select your move: ");
scanf("%d", &choice);
printf("\n");

if (choice==1) {
    //this part if the code calculates the attack damage and subtracts it from the enemy's hp by continuously over writing the attackpower variable
    temp=0;
	temp=finalstren/enemydefense;
    temp= temp*5;

    attackpower= temp;

   enemyhp= enemyhp-attackpower;
   printf("You attack the Enemy!\n");
}
else if (choice==2) {
	temp=0;
	temp=finalintel/enemyintelligence;
	temp=temp*5;

	magicpower=temp;

	enemyhp= enemyhp-magicpower;
	printf("You shocked the Enemy\n");
}

//this set is for the enemy


    //this part if the code calculates the attack damage and subtracts it from the enemy's hp by continuously over writing the attackpower variable
    temp=0;
	temp= enemystrength/finaldef;
    temp= temp*5;

    attackpower= temp;

    hp= hp-attackpower;
printf("The enemy attacks you\n");

} while ((enemyhp>0) && (hp>0));//code will continue as long as both hp bars are above 0


if (enemyhp==0)  {printf("Player Has Won!");}

else { printf("The Enemy Has Won");}



return 0;

}