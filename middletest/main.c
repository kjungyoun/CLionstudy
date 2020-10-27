#include <stdio.h>
#include "queue_list.h"
#include "lank.h"

int main() {
    // 등급별 큐 생성
    lank rock, bronze, silver, gold, ura, viv;
    init_lank(&rock, &bronze, &silver, &gold, &ura, &viv);

    // 각 등급에 있는 포지션 큐 생성
    queue r_top, r_mid,r_bottom, r_side;
    queue b_top, b_mid, b_bottom, b_side;
    queue s_top, s_mid, s_bottom, s_side;
    queue g_top,g_mid,g_bottom, g_side;
    queue u_top, u_mid, u_bottom, u_side;
    queue v_top, v_mid, v_bottom, v_side;

    // 각 포지션 큐 초기화
    initQueue(&r_top, &r_mid, &r_bottom, &r_side);
    initQueue(&b_top, &b_mid, &b_bottom, &b_side);
    initQueue(&s_top, &s_mid, &s_bottom, &s_side);
    initQueue(&g_top, &g_mid, &g_bottom, &g_side);
    initQueue(&u_top, &u_mid, &u_bottom, &u_side);
    initQueue(&v_top, &v_mid, &v_bottom, &v_side);

    // 각 등급별 큐에 4개씩의 포지션 큐 삽입
    push(&rock, &r_top);
    push(&rock, &r_mid);
    push(&rock, &r_bottom);
    push(&rock, &r_side);

    push(&bronze, &b_top);
    push(&bronze, &b_mid);
    push(&bronze, &b_bottom);
    push(&bronze, &b_side);

    push(&silver, &s_top);
    push(&silver, &s_mid);
    push(&silver, &s_bottom);
    push(&silver, &s_side);

    push(&gold, &g_top);
    push(&gold, &g_mid);
    push(&gold, &g_bottom);
    push(&gold, &g_side);

    push(&ura, &u_top);
    push(&ura, &u_mid);
    push(&ura, &u_bottom);
    push(&ura, &u_side);

    push(&viv, &v_top);
    push(&viv, &v_mid);
    push(&viv, &v_bottom);
    push(&viv, &v_side);

    // 데이터 삽입 및 매칭
    enqueueData(&silver,createUser("호람미어흥", "은","하단"));
    enqueueData(&rock,createUser("어른작슨", "돌","중단"));
    enqueueData(&rock,createUser("드드렁커억푸우", "돌","상단"));
    enqueueData(&rock,createUser("아리아나동그란데", "돌","옆구리"));
    enqueueData(&rock,createUser("김똥멍청", "돌", "하단"));
    enqueueData(&silver,createUser("롤하지말고 싸우쟈","은","중단"));
    enqueueData(&rock,createUser("팡명의 서광식","돌","하단"));
    enqueueData(&bronze,createUser("족보담당자","동","옆구리"));
    enqueueData(&rock,createUser("언더아머 단속반","돌","중단"));
    enqueueData(&rock,createUser("타코와사비","돌","상단"));
    enqueueData(&rock,createUser("가문의 영광굴비","돌","옆구리"));
    enqueueData(&rock,createUser("바람과 함께 살빠지다", "돌","하단"));
    enqueueData(&rock,createUser("오드리될뻔", "돌","중단"));
    enqueueData(&rock,createUser("농구있네축구싶냐", "돌","상단"));
    enqueueData(&silver,createUser("거져줄게잘사가", "은","중단"));
    enqueueData(&silver,createUser("살아줄게잘꺼져", "은","하단"));
    enqueueData(&rock,createUser("일해라절해라", "돌","옆구리"));
    enqueueData(&silver,createUser("형돈아형돈좀", "은","하단"));
    enqueueData(&silver,createUser("돈들어손내놔", "은","하단"));
    enqueueData(&bronze,createUser("명란젓코난", "동","중단"));
    enqueueData(&bronze,createUser("프로틴도둑 엄준식", "동","중단"));
    enqueueData(&rock,createUser("정통노예시장", "돌","중단"));
    enqueueData(&rock,createUser("이쑤신장군", "돌","하단"));
    enqueueData(&rock,createUser("전국모래자랑", "돌","상단"));
    enqueueData(&silver,createUser("짱구는 옷팔아", "은","상단"));
    enqueueData(&rock,createUser("성시경 친구 내시경", "돌","상단"));
    enqueueData(&rock,createUser("폭행몬스터", "돌","중단"));
    enqueueData(&rock,createUser("봉구스박보검", "돌","중단"));
    enqueueData(&bronze,createUser("오즈의맙소사", "동","옆구리"));
    enqueueData(&rock,createUser("피부암통키", "돌","중단"));
    enqueueData(&rock,createUser("니이모를 찾아서", "돌","중단"));
    enqueueData(&bronze,createUser("하울의 음 쥑이는성", "동","중단"));
    enqueueData(&rock,createUser("누가 문을 황현희", "돌","하단"));
    enqueueData(&rock,createUser("저는 이만 갑오개혁", "돌","하단"));
    enqueueData(&silver,createUser("반지하의 제왕", "은","하단"));
    enqueueData(&bronze,createUser("바람계곡의 나얼시카", "동","중단"));
    enqueueData(&rock,createUser("발광머리앤", "돌","중단"));
    enqueueData(&rock,createUser("베네딕트 자대배치", "돌","상단"));
    enqueueData(&rock,createUser("카드값줘 체리", "돌","중단"));
    enqueueData(&rock,createUser("조선왕조실룩샐룩", "돌","중단"));
    enqueueData(&bronze,createUser("달의요강 세일러문", "동","옆구리"));
    enqueueData(&rock,createUser("중성마녀 아라베스크", "돌","하단"));
    enqueueData(&rock,createUser("주님믿고 다이브", "돌","중단"));
    enqueueData(&rock,createUser("교회가다 걸린 스님", "돌","중단"));
    enqueueData(&bronze,createUser("태정태세이문세", "동","중단"));
    enqueueData(&ura,createUser("홍어심슨", "우라늄","중단"));
    enqueueData(&bronze,createUser("벼랑위의 당뇨", "동","중단"));
    enqueueData(&bronze,createUser("아프리카청춘이다", "동","상단"));
    enqueueData(&bronze,createUser("차린건 많지만 조금드세요", "동","중단"));
    enqueueData(&gold,createUser("내이름은 재난 얼굴이죠", "금","옆구리"));
    enqueueData(&rock,createUser("모두까기인형", "돌","옆구리"));
    enqueueData(&rock,createUser("연쇄할인범", "돌","옆구리"));
    enqueueData(&rock,createUser("우리사이 고멘나사이", "돌","하단"));

    printRemainAll(&rock,&bronze,&silver,&gold,&ura,&viv);
    return 0;
}
