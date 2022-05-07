

/*
URL stands for Uniform Resource Locator. 
A URL is nothing more than the address of a given unique resource on the Web. 
In theory, each valid URL points to a unique resource. 
Such resources can be an HTML page, a CSS document, an image, etc. 
A URL is composed of different parts, some mandatory and others optional
Now your task is to parse the given url into different parts:eg: https://www.google.com/images?query=Russell&zoom=falseso 
here a typical url is made up of 4 parts
1) scheme: https, http, tcp, (optional part)
2) domain name: www.google.com (note that the user can also give google.com/images?query=Russell and it would still be valid)
3) path: images (optional part)
4) parameters: (query=Russell, zoom=false) two queries are there separated by & (optional part)
Taking this as an example, write a c program which takes an url from user, and if it is valid prints all the available parts of the url, 


note thatthe optoinal parts might not always be giveneg of urls: 
1) https://developer.mozilla.org
2) www.developer.mozilla.org/en-US/docs/Learn/
3) developer.mozilla.org/en-US/docs/Learn/
4) http://www.developer.mozilla.org/en-US/search?q=URL


*/

#include <stdio.h>
#include <string.h>

int main()
{
    char url[1000];
    printf("Enter the url: ");
    scanf("%s", url);
    // :// separator for scheme
    // / first instance separates the url domain
    // ? is for the parameter
    int index_scheme = -10; // scheme is there
    int index_domain = -10; // if it is of the format '//'
                            // whenver I come across ? that is the index of query

    // strlen(url) ---> 14

    int length = strlen(url);
    for (int i = 0; i < length - 3; i++)
    {
        if (url[i] == ':' && url[i + 1] == '/' && url[i + 2] == '/')
        {
            index_scheme = i;
        }
    }

    if (index_scheme >= 0)
    {
        printf("scheme is there: ");
        for (int i = 0; i < index_scheme; i++)
        {
            printf("%c", url[i]);
        }
        printf("\n");
    }

    index_domain = index_scheme >= 0 ? index_scheme + 3 : 0;

    printf("Domain is: \n");
    for (int i = index_domain; url[i] != '/'; i++)
    {
        printf("%c", url[i]);
    }

    printf("\n");

    for (int i = ; url[i] != '?'; i++)
    {
        }

    return 0;
}
