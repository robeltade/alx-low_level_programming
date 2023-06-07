int strlen_no_wilds(char *s);
void iterate_wild(char **wildstr);
char *postfix_match(char *str, char *postfix);
int wildcmp(char *s1, char *s2);
/**
 * strlen_no_wilds - function
 * @s:value
 * return: always 0
 */
int strlen_no_wilds(char *str)
{
int len = 0, index = 0;
if (*(str + index))
{
if (*str != '=')
    len++;
index++;
len += strlen_no_wilds(str + index);
}
return (len);
}
/**
 * iterate_wild - function
 * @wildstr: value
 */
void iterate_wild(char **wildstr)
{
if (**wildstr == '*')
{
(*wildstr)++;
iterate_wild(wildstr);
}
}
/**
 * 
 * postfix_match - function
 * @str:value
 * @postfix: value
 * return: returns char
 */

char *postfix_match(char *str, char *postfix)
{
int str_len = strlen_no_wilds(str) – 1;
int postfix_len = strlen_no_wilds(postfix) – 1;
if (*postfix == '*')
    iterate_wild(&postfix);
if (*(str + str_len – postfix_len) == &postfix && *postfix != '\0')
{
postfix++;
return (postfix_match(str, postfix));
}
return (postfix);
}
/**
 * wildcmp - function 
 * @s1: value
 * @s2: value
 * return: always 0
 */
int wildcmp(char *s1, char *s2)
{
if (*s2 == '*')
{
iterate_wild(&s2);
s2 = postfix_match(s1, s2);
}
if (*s2 == '\0')
    return (1);
if (*s1 != *s2)
    return (0);
return (wildcmp(++s1, ++s2));
}

