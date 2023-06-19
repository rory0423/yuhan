#pragma once

void BeginGame();
void UpdateGame();
void EndGame();

int GameRunning;
/*게임 상태 변수
 * 0 : 게임 종료
 * 1 : 시작 타이틀 화면
 * 2 : 도움말 화면
 * 3 : 인게임 화면
*/