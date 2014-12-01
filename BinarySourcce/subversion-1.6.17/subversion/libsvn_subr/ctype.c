/*
 * ctype.c:  Character classification routines
 *
 * ====================================================================
 * Copyright (c) 2000-2004 CollabNet.  All rights reserved.
 *
 * This software is licensed as described in the file COPYING, which
 * you should have received as part of this distribution.  The terms
 * are also available at http://subversion.tigris.org/license-1.html.
 * If newer versions of this license are posted there, you may use a
 * newer version instead, at your option.
 *
 * This software consists of voluntary contributions made by many
 * individuals.  For exact contribution history, see the revision
 * history and logs, available at http://subversion.tigris.org/.
 * ====================================================================
 */



#include "svn_ctype.h"

const apr_uint32_t svn_ctype_table_internal[256] =
  {
    /* **** DO NOT EDIT! ****
       This table was generated by genctype.py, make changes there. */
    /* nul */ SVN_CTYPE_ASCII | SVN_CTYPE_CNTRL,
    /* soh */ SVN_CTYPE_ASCII | SVN_CTYPE_CNTRL,
    /* stx */ SVN_CTYPE_ASCII | SVN_CTYPE_CNTRL,
    /* etx */ SVN_CTYPE_ASCII | SVN_CTYPE_CNTRL,
    /* eot */ SVN_CTYPE_ASCII | SVN_CTYPE_CNTRL,
    /* enq */ SVN_CTYPE_ASCII | SVN_CTYPE_CNTRL,
    /* ack */ SVN_CTYPE_ASCII | SVN_CTYPE_CNTRL,
    /* bel */ SVN_CTYPE_ASCII | SVN_CTYPE_CNTRL,
    /* bs  */ SVN_CTYPE_ASCII | SVN_CTYPE_CNTRL,
    /* ht  */ SVN_CTYPE_ASCII | SVN_CTYPE_CNTRL | SVN_CTYPE_SPACE,
    /* nl  */ SVN_CTYPE_ASCII | SVN_CTYPE_CNTRL | SVN_CTYPE_SPACE,
    /* vt  */ SVN_CTYPE_ASCII | SVN_CTYPE_CNTRL | SVN_CTYPE_SPACE,
    /* np  */ SVN_CTYPE_ASCII | SVN_CTYPE_CNTRL | SVN_CTYPE_SPACE,
    /* cr  */ SVN_CTYPE_ASCII | SVN_CTYPE_CNTRL | SVN_CTYPE_SPACE,
    /* so  */ SVN_CTYPE_ASCII | SVN_CTYPE_CNTRL,
    /* si  */ SVN_CTYPE_ASCII | SVN_CTYPE_CNTRL,
    /* dle */ SVN_CTYPE_ASCII | SVN_CTYPE_CNTRL,
    /* dc1 */ SVN_CTYPE_ASCII | SVN_CTYPE_CNTRL,
    /* dc2 */ SVN_CTYPE_ASCII | SVN_CTYPE_CNTRL,
    /* dc3 */ SVN_CTYPE_ASCII | SVN_CTYPE_CNTRL,
    /* dc4 */ SVN_CTYPE_ASCII | SVN_CTYPE_CNTRL,
    /* nak */ SVN_CTYPE_ASCII | SVN_CTYPE_CNTRL,
    /* syn */ SVN_CTYPE_ASCII | SVN_CTYPE_CNTRL,
    /* etb */ SVN_CTYPE_ASCII | SVN_CTYPE_CNTRL,
    /* can */ SVN_CTYPE_ASCII | SVN_CTYPE_CNTRL,
    /* em  */ SVN_CTYPE_ASCII | SVN_CTYPE_CNTRL,
    /* sub */ SVN_CTYPE_ASCII | SVN_CTYPE_CNTRL,
    /* esc */ SVN_CTYPE_ASCII | SVN_CTYPE_CNTRL,
    /* fs  */ SVN_CTYPE_ASCII | SVN_CTYPE_CNTRL,
    /* gs  */ SVN_CTYPE_ASCII | SVN_CTYPE_CNTRL,
    /* rs  */ SVN_CTYPE_ASCII | SVN_CTYPE_CNTRL,
    /* us  */ SVN_CTYPE_ASCII | SVN_CTYPE_CNTRL,
    /* sp  */ SVN_CTYPE_ASCII | SVN_CTYPE_SPACE,
    /*  !  */ SVN_CTYPE_ASCII | SVN_CTYPE_PUNCT,
    /*  "  */ SVN_CTYPE_ASCII | SVN_CTYPE_PUNCT,
    /*  #  */ SVN_CTYPE_ASCII | SVN_CTYPE_PUNCT,
    /*  $  */ SVN_CTYPE_ASCII | SVN_CTYPE_PUNCT,
    /*  %  */ SVN_CTYPE_ASCII | SVN_CTYPE_PUNCT,
    /*  &  */ SVN_CTYPE_ASCII | SVN_CTYPE_PUNCT,
    /*  '  */ SVN_CTYPE_ASCII | SVN_CTYPE_PUNCT,
    /*  (  */ SVN_CTYPE_ASCII | SVN_CTYPE_PUNCT,
    /*  )  */ SVN_CTYPE_ASCII | SVN_CTYPE_PUNCT,
    /*  *  */ SVN_CTYPE_ASCII | SVN_CTYPE_PUNCT,
    /*  +  */ SVN_CTYPE_ASCII | SVN_CTYPE_PUNCT,
    /*  ,  */ SVN_CTYPE_ASCII | SVN_CTYPE_PUNCT,
    /*  -  */ SVN_CTYPE_ASCII | SVN_CTYPE_PUNCT,
    /*  .  */ SVN_CTYPE_ASCII | SVN_CTYPE_PUNCT,
    /*  /  */ SVN_CTYPE_ASCII | SVN_CTYPE_PUNCT,
    /*  0  */ SVN_CTYPE_ASCII | SVN_CTYPE_DIGIT,
    /*  1  */ SVN_CTYPE_ASCII | SVN_CTYPE_DIGIT,
    /*  2  */ SVN_CTYPE_ASCII | SVN_CTYPE_DIGIT,
    /*  3  */ SVN_CTYPE_ASCII | SVN_CTYPE_DIGIT,
    /*  4  */ SVN_CTYPE_ASCII | SVN_CTYPE_DIGIT,
    /*  5  */ SVN_CTYPE_ASCII | SVN_CTYPE_DIGIT,
    /*  6  */ SVN_CTYPE_ASCII | SVN_CTYPE_DIGIT,
    /*  7  */ SVN_CTYPE_ASCII | SVN_CTYPE_DIGIT,
    /*  8  */ SVN_CTYPE_ASCII | SVN_CTYPE_DIGIT,
    /*  9  */ SVN_CTYPE_ASCII | SVN_CTYPE_DIGIT,
    /*  :  */ SVN_CTYPE_ASCII | SVN_CTYPE_PUNCT,
    /*  ;  */ SVN_CTYPE_ASCII | SVN_CTYPE_PUNCT,
    /*  <  */ SVN_CTYPE_ASCII | SVN_CTYPE_PUNCT,
    /*  =  */ SVN_CTYPE_ASCII | SVN_CTYPE_PUNCT,
    /*  >  */ SVN_CTYPE_ASCII | SVN_CTYPE_PUNCT,
    /*  ?  */ SVN_CTYPE_ASCII | SVN_CTYPE_PUNCT,
    /*  @  */ SVN_CTYPE_ASCII | SVN_CTYPE_PUNCT,
    /*  A  */ SVN_CTYPE_ASCII | SVN_CTYPE_UPPER | SVN_CTYPE_XALPHA,
    /*  B  */ SVN_CTYPE_ASCII | SVN_CTYPE_UPPER | SVN_CTYPE_XALPHA,
    /*  C  */ SVN_CTYPE_ASCII | SVN_CTYPE_UPPER | SVN_CTYPE_XALPHA,
    /*  D  */ SVN_CTYPE_ASCII | SVN_CTYPE_UPPER | SVN_CTYPE_XALPHA,
    /*  E  */ SVN_CTYPE_ASCII | SVN_CTYPE_UPPER | SVN_CTYPE_XALPHA,
    /*  F  */ SVN_CTYPE_ASCII | SVN_CTYPE_UPPER | SVN_CTYPE_XALPHA,
    /*  G  */ SVN_CTYPE_ASCII | SVN_CTYPE_UPPER,
    /*  H  */ SVN_CTYPE_ASCII | SVN_CTYPE_UPPER,
    /*  I  */ SVN_CTYPE_ASCII | SVN_CTYPE_UPPER,
    /*  J  */ SVN_CTYPE_ASCII | SVN_CTYPE_UPPER,
    /*  K  */ SVN_CTYPE_ASCII | SVN_CTYPE_UPPER,
    /*  L  */ SVN_CTYPE_ASCII | SVN_CTYPE_UPPER,
    /*  M  */ SVN_CTYPE_ASCII | SVN_CTYPE_UPPER,
    /*  N  */ SVN_CTYPE_ASCII | SVN_CTYPE_UPPER,
    /*  O  */ SVN_CTYPE_ASCII | SVN_CTYPE_UPPER,
    /*  P  */ SVN_CTYPE_ASCII | SVN_CTYPE_UPPER,
    /*  Q  */ SVN_CTYPE_ASCII | SVN_CTYPE_UPPER,
    /*  R  */ SVN_CTYPE_ASCII | SVN_CTYPE_UPPER,
    /*  S  */ SVN_CTYPE_ASCII | SVN_CTYPE_UPPER,
    /*  T  */ SVN_CTYPE_ASCII | SVN_CTYPE_UPPER,
    /*  U  */ SVN_CTYPE_ASCII | SVN_CTYPE_UPPER,
    /*  V  */ SVN_CTYPE_ASCII | SVN_CTYPE_UPPER,
    /*  W  */ SVN_CTYPE_ASCII | SVN_CTYPE_UPPER,
    /*  X  */ SVN_CTYPE_ASCII | SVN_CTYPE_UPPER,
    /*  Y  */ SVN_CTYPE_ASCII | SVN_CTYPE_UPPER,
    /*  Z  */ SVN_CTYPE_ASCII | SVN_CTYPE_UPPER,
    /*  [  */ SVN_CTYPE_ASCII | SVN_CTYPE_PUNCT,
    /*  \  */ SVN_CTYPE_ASCII | SVN_CTYPE_PUNCT,
    /*  ]  */ SVN_CTYPE_ASCII | SVN_CTYPE_PUNCT,
    /*  ^  */ SVN_CTYPE_ASCII | SVN_CTYPE_PUNCT,
    /*  _  */ SVN_CTYPE_ASCII | SVN_CTYPE_PUNCT,
    /*  `  */ SVN_CTYPE_ASCII | SVN_CTYPE_PUNCT,
    /*  a  */ SVN_CTYPE_ASCII | SVN_CTYPE_LOWER | SVN_CTYPE_XALPHA,
    /*  b  */ SVN_CTYPE_ASCII | SVN_CTYPE_LOWER | SVN_CTYPE_XALPHA,
    /*  c  */ SVN_CTYPE_ASCII | SVN_CTYPE_LOWER | SVN_CTYPE_XALPHA,
    /*  d  */ SVN_CTYPE_ASCII | SVN_CTYPE_LOWER | SVN_CTYPE_XALPHA,
    /*  e  */ SVN_CTYPE_ASCII | SVN_CTYPE_LOWER | SVN_CTYPE_XALPHA,
    /*  f  */ SVN_CTYPE_ASCII | SVN_CTYPE_LOWER | SVN_CTYPE_XALPHA,
    /*  g  */ SVN_CTYPE_ASCII | SVN_CTYPE_LOWER,
    /*  h  */ SVN_CTYPE_ASCII | SVN_CTYPE_LOWER,
    /*  i  */ SVN_CTYPE_ASCII | SVN_CTYPE_LOWER,
    /*  j  */ SVN_CTYPE_ASCII | SVN_CTYPE_LOWER,
    /*  k  */ SVN_CTYPE_ASCII | SVN_CTYPE_LOWER,
    /*  l  */ SVN_CTYPE_ASCII | SVN_CTYPE_LOWER,
    /*  m  */ SVN_CTYPE_ASCII | SVN_CTYPE_LOWER,
    /*  n  */ SVN_CTYPE_ASCII | SVN_CTYPE_LOWER,
    /*  o  */ SVN_CTYPE_ASCII | SVN_CTYPE_LOWER,
    /*  p  */ SVN_CTYPE_ASCII | SVN_CTYPE_LOWER,
    /*  q  */ SVN_CTYPE_ASCII | SVN_CTYPE_LOWER,
    /*  r  */ SVN_CTYPE_ASCII | SVN_CTYPE_LOWER,
    /*  s  */ SVN_CTYPE_ASCII | SVN_CTYPE_LOWER,
    /*  t  */ SVN_CTYPE_ASCII | SVN_CTYPE_LOWER,
    /*  u  */ SVN_CTYPE_ASCII | SVN_CTYPE_LOWER,
    /*  v  */ SVN_CTYPE_ASCII | SVN_CTYPE_LOWER,
    /*  w  */ SVN_CTYPE_ASCII | SVN_CTYPE_LOWER,
    /*  x  */ SVN_CTYPE_ASCII | SVN_CTYPE_LOWER,
    /*  y  */ SVN_CTYPE_ASCII | SVN_CTYPE_LOWER,
    /*  z  */ SVN_CTYPE_ASCII | SVN_CTYPE_LOWER,
    /*  {  */ SVN_CTYPE_ASCII | SVN_CTYPE_PUNCT,
    /*  |  */ SVN_CTYPE_ASCII | SVN_CTYPE_PUNCT,
    /*  }  */ SVN_CTYPE_ASCII | SVN_CTYPE_PUNCT,
    /*  ~  */ SVN_CTYPE_ASCII | SVN_CTYPE_PUNCT,
    /* del */ SVN_CTYPE_ASCII | SVN_CTYPE_CNTRL,
    /* x80 */ SVN_CTYPE_UTF8CONT,
    /* x81 */ SVN_CTYPE_UTF8CONT,
    /* x82 */ SVN_CTYPE_UTF8CONT,
    /* x83 */ SVN_CTYPE_UTF8CONT,
    /* x84 */ SVN_CTYPE_UTF8CONT,
    /* x85 */ SVN_CTYPE_UTF8CONT,
    /* x86 */ SVN_CTYPE_UTF8CONT,
    /* x87 */ SVN_CTYPE_UTF8CONT,
    /* x88 */ SVN_CTYPE_UTF8CONT,
    /* x89 */ SVN_CTYPE_UTF8CONT,
    /* x8a */ SVN_CTYPE_UTF8CONT,
    /* x8b */ SVN_CTYPE_UTF8CONT,
    /* x8c */ SVN_CTYPE_UTF8CONT,
    /* x8d */ SVN_CTYPE_UTF8CONT,
    /* x8e */ SVN_CTYPE_UTF8CONT,
    /* x8f */ SVN_CTYPE_UTF8CONT,
    /* x90 */ SVN_CTYPE_UTF8CONT,
    /* x91 */ SVN_CTYPE_UTF8CONT,
    /* x92 */ SVN_CTYPE_UTF8CONT,
    /* x93 */ SVN_CTYPE_UTF8CONT,
    /* x94 */ SVN_CTYPE_UTF8CONT,
    /* x95 */ SVN_CTYPE_UTF8CONT,
    /* x96 */ SVN_CTYPE_UTF8CONT,
    /* x97 */ SVN_CTYPE_UTF8CONT,
    /* x98 */ SVN_CTYPE_UTF8CONT,
    /* x99 */ SVN_CTYPE_UTF8CONT,
    /* x9a */ SVN_CTYPE_UTF8CONT,
    /* x9b */ SVN_CTYPE_UTF8CONT,
    /* x9c */ SVN_CTYPE_UTF8CONT,
    /* x9d */ SVN_CTYPE_UTF8CONT,
    /* x9e */ SVN_CTYPE_UTF8CONT,
    /* x9f */ SVN_CTYPE_UTF8CONT,
    /* xa0 */ SVN_CTYPE_UTF8CONT,
    /* xa1 */ SVN_CTYPE_UTF8CONT,
    /* xa2 */ SVN_CTYPE_UTF8CONT,
    /* xa3 */ SVN_CTYPE_UTF8CONT,
    /* xa4 */ SVN_CTYPE_UTF8CONT,
    /* xa5 */ SVN_CTYPE_UTF8CONT,
    /* xa6 */ SVN_CTYPE_UTF8CONT,
    /* xa7 */ SVN_CTYPE_UTF8CONT,
    /* xa8 */ SVN_CTYPE_UTF8CONT,
    /* xa9 */ SVN_CTYPE_UTF8CONT,
    /* xaa */ SVN_CTYPE_UTF8CONT,
    /* xab */ SVN_CTYPE_UTF8CONT,
    /* xac */ SVN_CTYPE_UTF8CONT,
    /* xad */ SVN_CTYPE_UTF8CONT,
    /* xae */ SVN_CTYPE_UTF8CONT,
    /* xaf */ SVN_CTYPE_UTF8CONT,
    /* xb0 */ SVN_CTYPE_UTF8CONT,
    /* xb1 */ SVN_CTYPE_UTF8CONT,
    /* xb2 */ SVN_CTYPE_UTF8CONT,
    /* xb3 */ SVN_CTYPE_UTF8CONT,
    /* xb4 */ SVN_CTYPE_UTF8CONT,
    /* xb5 */ SVN_CTYPE_UTF8CONT,
    /* xb6 */ SVN_CTYPE_UTF8CONT,
    /* xb7 */ SVN_CTYPE_UTF8CONT,
    /* xb8 */ SVN_CTYPE_UTF8CONT,
    /* xb9 */ SVN_CTYPE_UTF8CONT,
    /* xba */ SVN_CTYPE_UTF8CONT,
    /* xbb */ SVN_CTYPE_UTF8CONT,
    /* xbc */ SVN_CTYPE_UTF8CONT,
    /* xbd */ SVN_CTYPE_UTF8CONT,
    /* xbe */ SVN_CTYPE_UTF8CONT,
    /* xbf */ SVN_CTYPE_UTF8CONT,
    /* xc0 */ 0,
    /* xc1 */ SVN_CTYPE_UTF8LEAD,
    /* xc2 */ SVN_CTYPE_UTF8LEAD,
    /* xc3 */ SVN_CTYPE_UTF8LEAD,
    /* xc4 */ SVN_CTYPE_UTF8LEAD,
    /* xc5 */ SVN_CTYPE_UTF8LEAD,
    /* xc6 */ SVN_CTYPE_UTF8LEAD,
    /* xc7 */ SVN_CTYPE_UTF8LEAD,
    /* xc8 */ SVN_CTYPE_UTF8LEAD,
    /* xc9 */ SVN_CTYPE_UTF8LEAD,
    /* xca */ SVN_CTYPE_UTF8LEAD,
    /* xcb */ SVN_CTYPE_UTF8LEAD,
    /* xcc */ SVN_CTYPE_UTF8LEAD,
    /* xcd */ SVN_CTYPE_UTF8LEAD,
    /* xce */ SVN_CTYPE_UTF8LEAD,
    /* xcf */ SVN_CTYPE_UTF8LEAD,
    /* xd0 */ SVN_CTYPE_UTF8LEAD,
    /* xd1 */ SVN_CTYPE_UTF8LEAD,
    /* xd2 */ SVN_CTYPE_UTF8LEAD,
    /* xd3 */ SVN_CTYPE_UTF8LEAD,
    /* xd4 */ SVN_CTYPE_UTF8LEAD,
    /* xd5 */ SVN_CTYPE_UTF8LEAD,
    /* xd6 */ SVN_CTYPE_UTF8LEAD,
    /* xd7 */ SVN_CTYPE_UTF8LEAD,
    /* xd8 */ SVN_CTYPE_UTF8LEAD,
    /* xd9 */ SVN_CTYPE_UTF8LEAD,
    /* xda */ SVN_CTYPE_UTF8LEAD,
    /* xdb */ SVN_CTYPE_UTF8LEAD,
    /* xdc */ SVN_CTYPE_UTF8LEAD,
    /* xdd */ SVN_CTYPE_UTF8LEAD,
    /* xde */ SVN_CTYPE_UTF8LEAD,
    /* xdf */ SVN_CTYPE_UTF8LEAD,
    /* xe0 */ 0,
    /* xe1 */ SVN_CTYPE_UTF8LEAD,
    /* xe2 */ SVN_CTYPE_UTF8LEAD,
    /* xe3 */ SVN_CTYPE_UTF8LEAD,
    /* xe4 */ SVN_CTYPE_UTF8LEAD,
    /* xe5 */ SVN_CTYPE_UTF8LEAD,
    /* xe6 */ SVN_CTYPE_UTF8LEAD,
    /* xe7 */ SVN_CTYPE_UTF8LEAD,
    /* xe8 */ SVN_CTYPE_UTF8LEAD,
    /* xe9 */ SVN_CTYPE_UTF8LEAD,
    /* xea */ SVN_CTYPE_UTF8LEAD,
    /* xeb */ SVN_CTYPE_UTF8LEAD,
    /* xec */ SVN_CTYPE_UTF8LEAD,
    /* xed */ SVN_CTYPE_UTF8LEAD,
    /* xee */ SVN_CTYPE_UTF8LEAD,
    /* xef */ SVN_CTYPE_UTF8LEAD,
    /* xf0 */ 0,
    /* xf1 */ SVN_CTYPE_UTF8LEAD,
    /* xf2 */ SVN_CTYPE_UTF8LEAD,
    /* xf3 */ SVN_CTYPE_UTF8LEAD,
    /* xf4 */ SVN_CTYPE_UTF8LEAD,
    /* xf5 */ SVN_CTYPE_UTF8LEAD,
    /* xf6 */ SVN_CTYPE_UTF8LEAD,
    /* xf7 */ SVN_CTYPE_UTF8LEAD,
    /* xf8 */ 0,
    /* xf9 */ SVN_CTYPE_UTF8LEAD,
    /* xfa */ SVN_CTYPE_UTF8LEAD,
    /* xfb */ SVN_CTYPE_UTF8LEAD,
    /* xfc */ 0,
    /* xfd */ SVN_CTYPE_UTF8LEAD,
    /* xfe */ 0,
    /* xff */ 0
  };

const apr_uint32_t *const svn_ctype_table = svn_ctype_table_internal;

static const unsigned char casefold_table[256] =
  {
    /* Identity, except {97:122} => {65:90} */
      0,  1,  2,  3,  4,  5,  6,  7,  8,  9, 10, 11, 12, 13, 14, 15,
     16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31,
     32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47,
     48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63,
     64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79,
     80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95,
     96, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79,
     80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90,123,124,125,126,127,
    128,129,130,131,132,133,134,135,136,137,138,139,140,141,142,143,
    144,145,146,147,148,149,150,151,152,153,154,155,156,157,158,159,
    160,161,162,163,164,165,166,167,168,169,170,171,172,173,174,175,
    176,177,178,179,180,181,182,183,184,185,186,187,188,189,190,191,
    192,193,194,195,196,197,198,199,200,201,202,203,204,205,206,207,
    208,209,210,211,212,213,214,215,216,217,218,219,220,221,222,223,
    224,225,226,227,228,229,230,231,232,233,234,235,236,237,238,239,
    240,241,242,243,244,245,246,247,248,249,250,251,252,253,254,255
  };

int
svn_ctype_casecmp(int a, int b)
{
  const int A = casefold_table[(unsigned char)a];
  const int B = casefold_table[(unsigned char)b];
  return A - B;
}
