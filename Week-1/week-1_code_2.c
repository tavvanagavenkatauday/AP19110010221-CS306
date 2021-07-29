#include<stdio.h>
void main ()
{
  int state = 0, i = 0;
  char present_state, input[20];

  printf ("Enter str:\n");
  scanf ("%s", input);

  while ((present_state = input[i++]) != '\0')
    {
      switch (state)
	{
	case 0:
	  if (present_state == 'a')
	    state = 1;
	  else if (present_state == 'b')
	    state = 3;
	  else
	    {
	      printf ('Invalid\n');
	      exit (0);
	    }
	  break;
	case 1:
	  if (present_state == 'a')
	    state = 2;
	  else if (present_state == 'b')
	    state = 3;
	  else
	    {
	      printf ("Invalid\n");
	      exit (0);
	    }
	  break;
	case 2:
	  if (present_state == 'a')
	    state = 2;
	  else if (present_state == 'b')
	    state = 3;
	  else
	    {
	      printf ("Invalid\n");
	      exit (0);
	    }
	  break;
	case 3:
	  if (present_state == 'a')
	    state = 1;
	  else if (present_state == 'b')
	    state = 4;
	  else
	    {
	      printf ("Invalid\n");
	      exit (0);
	    }
	  break;
	case 4:
	  if (present_state == 'a')
	    state = 1;
	  else if (present_state == 'b')
	    state = 4;
	  else
	    {
	      printf ("Invalid\n");
	      exit (0);
	    }
	  break;
	}
    }
  if (state == 2 || state == 4)
    {
      printf ("String accepted\n");
    }
  else
    {
      printf ("String not accepted\n");
    }
}