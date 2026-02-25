#include <stdio.h>
#include <cs50.h>

int main(void)
{
    char w = get_char("Type a letter.\n");

    if (w == 'a' || w == 'e' || w == 'i' || w == 'u' || w == 'o' || w == 'A' || w == 'E' || w == 'I' ||
         w == 'U' || w == 'O')
    {
        printf("It is a vowel letter.\n");

        //The program is compiled.
        
        //PROBLEM//
        //The else block is not taking effect.
        //The else-if block executes even if the input is supposed to trigger the else block.


        //first mistake:
        //the use of the (||)-or logical operator in the else-if block set every value of "w",  aside from one 
        //possible false, to be always true regardless of any special character or any letter input.

        //it is because even if in the first value of "w' for example: which is (!=) not equal to'a'becomes
        //false(let's say the user typed 'a'), the rest of the conditions remains true. 
        //It is because the preceeding conditions have their own value. 
        //Like != 'e', != 'o', != 'u', and so on. 
        //And since the operator used among the condition values is or (||), the whole else-if block
        //only needs one of the condition values to be true to execute regardless of the value of the other
        //conditions or if there is a false condition value among the conditions for the given user input.

        //second mistake
        //(w >= 'a' || w >= 'A' || w <= 'z' || w <= 'Z')
        //the second condition, requires that for the if-else block to execute, the variable value must be
        //greater than 'a' or(||) 'A' or smaller than 'z' or(||) 'Z'
        //that means that all characters which has the value greater that of 'a' will execute the block and;
        //any character that has smaller value than that of 'z' or(||) 'Z' will also trigger the block.
        //This makes an infinite true status for the condition because it will cover all the characters
        // regardless of the value.
        //'a' and 'A' have 97 and 65 corresponding value respectively, that means all characters higher than
        // 65 or 97 are a block trigger.
        //'z' and 'Z' have 122 and 90 corresponding value respectively, that means that all characters lower
        //than them down to zero will trigger the block.
        //logically speaking, the second condition set all the available character input to be trigerring value
        //for the block.
        //Therefore, both of the first condition and the second condition are set to be always true in the way
        //it is coded.

        //CO-Pilot:
        //Using OR between the range checks means any character greater than 'A' or less than 'z' will pass.
        //Since almost all characters satisfy one of those, the conditions is alwys true. The correct approach
        //is to use AND to bind the lower and upper limits together, e.g.(w >= 'a' && w <= 'z')

        ///////////////// Lesson:
        //When there are multiple values that you want to be part of your conditions:
        //You have to determine all the values, may it be an specific character, range, or whatever that can
        //be ranged from and to, so the target value is determined and specific.
        //Make sure that you use &&(and) among the conditions so that all of it will be checked to be whether
        //true or false.

        //additionally,
        //a-z and A-Z are enclosed in the letter range and no other character are mixed within that range value.
        //Hence, it is enough to require the value range of the letter and there is no need to specify the vowels
        //for the not equal to(!=) just to detect the other characters.
    } 
    else if ((w != 'a' || w != 'e' || w != 'i' || w != 'u' || w != 'o' || w != 'A' || w != 'E' ||
         w != 'I' || w != 'U' || w != 'O') && (w >= 'a' || w >= 'A' || w <= 'z' || w <= 'Z'))
    {
        printf("This is a consonant.\n");
    }
    else
    {
        printf("That is not a letter,\n");
    }    
}