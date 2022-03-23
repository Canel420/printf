% _PRINTF ms 1.0
% Manu and Ed
% March 2022

# _PRINTF
 _printf - formatted output conversion

# SYNOPSIS
**_printf** (**const char** *format, ...)

# DESCRIPTION
The function produce output according to a format as described below. Write
output to stdout. The output is written under the control of a format string
that specifies how subsequent arguments are converted for output.

# FORMAT OF THE FORMAT STRING
The format string is a character string. Is composed of zero or more
directives: ordinary characters (not %), are copied unchanged to the output
stream; and conversion specifications, each of which results in fetching
zero or more subsequent arguments. Each conversion specification is intro-
duce by the character %, and ends with a conversion specifier.

The arguments must correspond properly with the conversion specifier. Thus,

      _printf("this is a number %d and another number %d", num, num);

# CONVERSION SPECIFIERS

**d, i** The int argument is converted to signed decimal notation.

**c** The int argument is converted to an unsigned char, and the resulting
      character is written.

**s** The constant char * argument is expected to be a pointer to an array
      of characters type. Characters from the array are written.

**r** The constant char * (pointer to array of characters) is written in
      reverse.

**%** A % is written. No argument is conveerted

# RETURN VALUE

Upon success, the function return the number of characters printed.

If an error is encountered, a negative value is returned.

# BUGS

it has, but we don't know them.