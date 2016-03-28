#include <stdio.h>
//2300.notes.05 tools for viewing and editing binary data
//recording Feb22, 35mins
int main()
{
	return 0;
}


/*
cat and less
The cat command will concatenate a list of files and 
	print result. 
The less command gives you more control over viewing
	ASCII files as you can scroll and do simple searches
	within the text. 

File redirection and pipes
<: redirect input from a file
>: redirect data to a file. 
>>: append to a file
l: redirect the data from the output of one program to the input of another. 

e.g. cat greeting twice and redirect the output to new file other
&cat greeting greeting > other
&cat other
Helloworld!
hwlloworld!

echo: prints to standard out the paramter the echo commeand is given
$echo Hellowolrd!
helloworld!
$echo Hellowolrd > greetingFile
$cat greetingFile
Hellowolrd!
*/