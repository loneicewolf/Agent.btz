
/*
*   
*    comments coming soon.
*   ------------------------
*/
void __fastcall FA_TMP_FUNC(int param_1)

{
  LPSTR lpPathName;
  CHAR local_21c [260];
  CHAR local_118 [260];
  uint local_14;
  char *local_10;
  LPSTR local_c;
  uint local_8;
  
  local_c = (LPSTR)(param_1 + 0x114);
  memset(local_c,0,0x104);
  if (*(int *)(param_1 + 0xc) == 0) {
    wsprintfA(local_c,(LPCSTR)(param_1 + 0x10));
  }
  else {
    local_10 = strrchr((char *)(param_1 + 0x10),0x5c);
    if (local_10 != (char *)0x0) {
      local_10 = local_10 + 1;
      memset(local_21c,0,0x104);
      memset(local_118,0,0x104);
      local_14 = lstrlenA(local_10);
      local_8 = 0;
      if (local_14 != 0) {
        do {
          wsprintfA(local_118,&DAT_00405238,(int)local_10[local_8]);
          lstrcatA(local_21c,local_118);
          local_8 = local_8 + 1;
        } while (local_8 < local_14);
      }
      lpPathName = local_c;
      wsprintfA(local_c,&DAT_00405108,param_1 + 0x31c);
      CreateDirectoryA(lpPathName,(LPSECURITY_ATTRIBUTES)0x0);
      lstrcatA(lpPathName,local_21c);
      lstrcatA(lpPathName,s_FA_tmp_00405230);
    }
  }
  return;
}
