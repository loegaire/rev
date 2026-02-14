
undefined8 FUN_140109590(undefined4 *param_1)

{
  undefined4 local_28 [2];
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_28[0] = *param_1;
  local_20 = *(undefined8 *)(param_1 + 2);
  (**(code **)(param_1 + 4))(local_28);
  _Cnd_do_broadcast_at_thread_exit();
  free(param_1);
  return 0;
}

