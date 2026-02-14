
BOOL __stdcall VerQueryValueW(LPCVOID pBlock,LPCWSTR lpSubBlock,LPVOID *lplpBuffer,PUINT puLen)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014010a550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = VerQueryValueW(pBlock,lpSubBlock,lplpBuffer,puLen);
  return BVar1;
}

