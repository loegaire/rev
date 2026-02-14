
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* Library Function - Single Match
    public: __cdecl std::_Fac_tidy_reg_t::~_Fac_tidy_reg_t(void) __ptr64
   
   Library: Visual Studio 2019 Release */

void __thiscall std::_Fac_tidy_reg_t::~_Fac_tidy_reg_t(_Fac_tidy_reg_t *this)

{
  undefined8 *_Memory;
  undefined8 *puVar1;
  
  while (_Memory = DAT_14012aa18, DAT_14012aa18 != (undefined8 *)0x0) {
    puVar1 = DAT_14012aa18 + 1;
    DAT_14012aa18 = (undefined8 *)*DAT_14012aa18;
    puVar1 = (undefined8 *)(**(code **)(*(longlong *)*puVar1 + 0x10))();
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    free(_Memory);
  }
  return;
}

