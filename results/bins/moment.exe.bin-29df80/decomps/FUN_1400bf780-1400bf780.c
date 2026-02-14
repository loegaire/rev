
undefined8 * FUN_1400bf780(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  *param_1 = std::_Node_assert::vftable;
  puVar2 = (undefined8 *)param_1[4];
  while (puVar2 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)puVar2[2];
    puVar2[2] = 0;
    (**(code **)*puVar2)(puVar2,1);
    puVar2 = puVar1;
  }
  if (param_2 != 0) {
    free(param_1);
  }
  return param_1;
}

