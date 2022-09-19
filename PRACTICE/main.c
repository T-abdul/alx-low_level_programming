#include "main.h"                                                                                                                       
                                                                                                                                        
/**                                                                                                                                     
 * alpha - print alphabet latters without 'c' and 'k'                                                                                   
 *                                                                                                                                      
 * Return: void                                                                                                                         
 */                                                                                                                                     
void alpha(void)                                                                                                                        
{                                                                                                                                       
        int i;                                                                                                                          
                                                                                                                                        
        for (i = 'a'; i <= 'Z'; i++)                                                                                                    
                if (i == 'c' || i == 'k')                                                                                               
                        continue; 
