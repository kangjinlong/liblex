/*
 * Regex support
 * 
 * Author: Felipe Pena <felipensp at gmail.com>
 */
 
#ifndef LLEX_REGEX_H
#define LLEX_REGEX_H

#include <pcre.h>

pcre *llex_regex_compile(unsigned char*);
int llex_regex_match(llex*, pcre*, unsigned char*);

#endif /* LLEX_REGEX_H */
