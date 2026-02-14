
undefined8 * FUN_1400bf800(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  *param_1 = std::_Node_if::vftable;
  puVar1 = (undefined8 *)param_1[5];
  do {
    do {
      puVar4 = puVar1;
      if (puVar4 == (undefined8 *)0x0) {
        if (param_2 != 0) {
          free(param_1);
        }
        return param_1;
      }
      puVar1 = (undefined8 *)puVar4[5];
      puVar4[5] = 0;
      puVar2 = (undefined8 *)param_1[4];
    } while (puVar4 == puVar2);
    do {
      puVar3 = (undefined8 *)puVar4[2];
      puVar4[2] = 0;
      (**(code **)*puVar4)(puVar4,1);
      if (puVar3 == puVar2) break;
      puVar4 = puVar3;
    } while (puVar3 != (undefined8 *)0x0);
  } while( true );
}

