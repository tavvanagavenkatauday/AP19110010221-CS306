#include<stdio.h>
void
main ()
{
  
int state = 0, i = 0;
  

char present_state, input[20];
  
printf ("Enter input:");
  
scanf ("%s", input);
  
while ((present_state = input[i++]) != '\0')
    {
      
switch (state)
	
	{
	
case 0:
	  if (present_state == 'a')
	    
state = 1;
	  
	  else if (present_state == 'b')
	    
state = 2;
	  
	  else
	    
	    {
	      
printf ("Invalid token");
	      
exit (0);
	    
}
	  
break;
	
case 1:
	  if (present_state == 'a')
	    
state = 0;
	  
	  else if (present_state == 'b')
	    
state = 3;
	  
	  else
	    
	    {
	      
printf ("Invalid token");
	      
exit (0);
	    
}
	  
break;
	
case 2:
	  if (present_state == 'a')
	    
state = 3;
	  
	  else if (present_state == 'b')
	    
state = 0;
	  
	  else
	    
	    {
	      
printf ("Invalid token");
	      
exit (0);
	    
}
	  
break;
	
case 3:
	  if (present_state == 'a')
	    
state = 2;
	  
	  else if (present_state == 'b')
	    
state = 1;
	  
	  else
	    
	    {
	      
printf ("Invalid token");
	      
exit (0);
	    
}
	  
break;
	
}
    
}
  
if (state == 0)
    
printf ("String accepted\n");
  
  else
    
printf ("String not accepted\n\n");

}