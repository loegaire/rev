
undefined8 * FUN_1400bf620(undefined8 *param_1,longlong param_2)

{
  undefined1 auVar1 [16];
  
  *param_1 = std::exception::vftable;
  auVar1._0_12_ = ZEXT812(0);
  auVar1._12_4_ = 0;
  *(undefined1 (*) [16])(param_1 + 1) = auVar1;
  __std_exception_copy(param_2 + 8,param_1 + 1);
  return param_1;
}

