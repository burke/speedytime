#include "ruby.h"
#include <sys/time.h>

VALUE speedytime_current(void)
{
  struct timeval &tv;
  gettimeofday(&tv, NULL);
  return INT2FIX(tv.tv_sec);
}

void Init_speedytime(void)
{
  VALUE mSpeedytime = rb_define_module("Speedytime");
  rb_define_module_function(mSpeedytime, "current", speedytime_current, -1);
}
