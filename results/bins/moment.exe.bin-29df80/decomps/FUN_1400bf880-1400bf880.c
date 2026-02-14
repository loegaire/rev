
undefined8 * FUN_1400bf880(undefined8 *param_1,int param_2)

{
  void *pvVar1;
  void *pvVar2;
  
  *param_1 = std::_Node_class<char,class_std::regex_traits<char>_>::vftable;
  pvVar2 = (void *)param_1[4];
  while (pvVar2 != (void *)0x0) {
    pvVar1 = *(void **)((longlong)pvVar2 + 0x18);
    free(*(void **)((longlong)pvVar2 + 0x10));
    free(pvVar2);
    pvVar2 = pvVar1;
  }
  if ((void *)param_1[5] != (void *)0x0) {
    free((void *)param_1[5]);
  }
  pvVar2 = (void *)param_1[6];
  if (pvVar2 != (void *)0x0) {
    free(*(void **)((longlong)pvVar2 + 8));
    free(pvVar2);
  }
  pvVar2 = (void *)param_1[7];
  if (pvVar2 != (void *)0x0) {
    free(*(void **)((longlong)pvVar2 + 8));
    free(pvVar2);
  }
  pvVar2 = (void *)param_1[9];
  while (pvVar2 != (void *)0x0) {
    pvVar1 = *(void **)((longlong)pvVar2 + 0x18);
    free(*(void **)((longlong)pvVar2 + 0x10));
    free(pvVar2);
    pvVar2 = pvVar1;
  }
  if (param_2 != 0) {
    free(param_1);
  }
  return param_1;
}

