#include "c_lang_gem.h"

VALUE rb_mCLangGem;

VALUE
hello(VALUE self, VALUE subject)
{
  Check_Type(subject, T_STRING);

  int size = 21 + RSTRING_LEN(subject);
  char buf[size];

  snprintf(buf, sizeof buf, "Hello from C Lang, %s!", StringValueCStr(subject));

  return rb_str_new(buf, size - 1);
}

void Init_c_lang_gem(void)
{
  rb_mCLangGem = rb_define_module("CLangGem");
  rb_define_singleton_method(rb_mCLangGem, "hello", hello, 1);
}
