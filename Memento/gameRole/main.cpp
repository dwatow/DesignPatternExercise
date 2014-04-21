#include "GameRole.h"


int main()
{
    //大戰魔頭前
    GameRole* pLixiaoyao = new GameRole();

    pLixiaoyao->getInitState();
    pLixiaoyao->stateDisplay();

    //保存進度
    GameRole* pBackup = new GameRole();
    pBackup->setVitality(pLixiaoyao->getVitality());
    pBackup->setAttack(pLixiaoyao->getAttack());
    pBackup->setDefense(pLixiaoyao->getDefense());

    //大戰魔頭時，損秏嚴重
    pLixiaoyao->fight();
    pLixiaoyao->stateDisplay();

    //恢復之前狀態
    pLixiaoyao->setVitality(pBackup->getVitality());
    pLixiaoyao->setAttack(pBackup->getAttack());
    pLixiaoyao->setDefense(pBackup->getDefense());

    pLixiaoyao->stateDisplay();

    return 0;
}

/*
有問題的部份
//保存進度
//恢復之前狀態
這兩段將實作細節曝露給用戶端
設定值、備份值，這些動作如果可以封裝起來的話那就好了。
*/