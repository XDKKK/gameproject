#include <bangtal.h>

SceneID room1, room2, GAMEROOM, room3 ;
ObjectID door1, door2, door3, door4, entrance, statue, keypad, stair, npc1, npc2, gameboard, horse, black[15], white[15], red1, red2, piece, pt[15], wp[15], restart, end;
bool locked = true;


int i;
int j = 0;
int k1 = 283; int k2 = 411; int k3 = 539; int k4 = 669; int k5 = 795; int k6 = 925;
int l1 = 119; int l2 = 247; int l3 = 375; int l4 = 503; int l5 = 631;





void mouseCallback1(ObjectID Object, int x, int y, MouseAction action) {
	if (Object == door1) showMessage("2B�� �����̾�!");
	else if (Object == door2)  showMessage("4D�� �����ε�?");
	else if (Object == door3) {
		locked = true;
		showMessage("�� ������ �ƴϾ�.");
	}
	else if (Object == door4)  showMessage("2B�� ���������̾�."); //Scene1���� �� �̺�Ʈ
	else if (Object == statue) showKeypad("3C", statue);
	else if (Object == entrance) enterScene(room2);
	//Scene2 �̺�Ʈ
	else if (Object == npc1) {
		showMessage("��ã�ƿԳ�! ���� �غ��� ������ ü�� ���� ����Ʈ�� ��� ü������ �̵��ϴ� �����̾�.\n�ѹ� �̵��� ü������ ���������� �ٲ��, �ٽ� ���ƿ� �� ����!\n���� ���̻� �̵��Ҽ� ���ٸ�, ���ӿ�����. ������ ������ؼ� �ٽ� �� ã�ƿ���.\n������ ���� ������ ���ӽ���!!!");
	
			
		showObject(horse);
	}
	else if (Object == horse) enterScene(GAMEROOM);
	//Scene3 �̺�Ʈ

	
	else if (Object == pt[0]) {
		for (i = 0; i < 15; i++) { hideObject(pt[i]); hideObject(wp[i]); }
		pt[0] = 1;
		setObjectImage(white[0], "Images/Red2.jpg"); locateObject(piece, GAMEROOM, k2, l1); 
	    showObject(pt[11]); showObject(pt[13]); showObject(pt[8]);
		j++;
	}
	else if (Object == pt[1]) {
		for (i = 0; i < 15; i++) { hideObject(pt[i]); hideObject(wp[i]); }
		pt[1] = 1;
		setObjectImage(black[1], "Images/Red2.jpg"); locateObject(piece, GAMEROOM, k3, l1);
		showObject(pt[5]); showObject(pt[12]); showObject(pt[14]); showObject(pt[9]);
		j++;
	}
	else if (Object == pt[2]) {
		for (i = 0; i < 15; i++) { hideObject(pt[i]); hideObject(wp[i]); }
		pt[2] = 1;
		setObjectImage(white[1], "Images/Red2.jpg"); locateObject(piece, GAMEROOM, k4, l1);
		showObject(pt[6]); showObject(pt[10]); showObject(pt[13]); showObject(wp[0]);
		j++;
	}
	else if (Object == pt[3]) {
		for (i = 0; i < 15; i++) { hideObject(pt[i]); hideObject(wp[i]); }
		pt[3] = 1;
		setObjectImage(black[2], "Images/Red2.jpg"); locateObject(piece, GAMEROOM, k5, l1);
		showObject(pt[7]); showObject(pt[14]); showObject(wp[1]);
		j++;
	}
	else if (Object == pt[4]) {
		for (i = 0; i < 15; i++) { hideObject(pt[i]); hideObject(wp[i]); }
		pt[4] = 1;
		setObjectImage(white[2], "Images/Red2.jpg"); locateObject(piece, GAMEROOM, k6, l1);
		showObject(pt[8]); showObject(wp[0]);
		j++;
	}
	else if (Object == pt[5]) {
		for (i = 0; i < 15; i++) { hideObject(pt[i]); hideObject(wp[i]); }
		pt[5] = 1;
		setObjectImage(white[3], "Images/Red2.jpg"); locateObject(piece, GAMEROOM, k1, l2);
		showObject(pt[1]); showObject(pt[13]); showObject(wp[3]);
		j++;
	}
	else if (Object == pt[6]) {
		for (i = 0; i < 15; i++) { hideObject(pt[i]); hideObject(wp[i]); }
		pt[6] = 1;
		setObjectImage(black[3], "Images/Red2.jpg"); locateObject(piece, GAMEROOM, k2, l2);
		showObject(pt[2]); showObject(pt[14]); showObject(wp[2]); showObject(wp[4]);
		j++;
	}
	else if (Object == pt[7]) {
		for (i = 0; i < 15; i++) { hideObject(pt[i]); hideObject(wp[i]); }
		pt[7] = 1;
		setObjectImage(white[4], "Images/Red2.jpg"); locateObject(piece, GAMEROOM, k3, l2);
		showObject(pt[11]); showObject(wp[3]); showObject(wp[5]); showObject(wp[0]); showObject(pt[3]);
		j++;
	}
	else if (Object == pt[8]) {
		for (i = 0; i < 15; i++) { hideObject(pt[i]); hideObject(wp[i]); }
		pt[8] = 1;
		setObjectImage(black[4], "Images/Red2.jpg"); locateObject(piece, GAMEROOM, k4, l2);
		showObject(pt[0]); showObject(pt[12]); showObject(pt[4]); showObject(wp[4]); showObject(wp[6]); showObject(wp[1]);
		j++;
	}
	else if (Object == pt[9]) {
		for (i = 0; i < 15; i++) { hideObject(pt[i]); hideObject(wp[i]); }
		pt[9] = 1;
		setObjectImage(white[5], "Images/Red2.jpg"); locateObject(piece, GAMEROOM, k5, l2);
		showObject(pt[1]); showObject(pt[13]); showObject(wp[5]); showObject(wp[7]);
		j++;
	}
	else if (Object == pt[10]) {
		for (i = 0; i < 15; i++) { hideObject(pt[i]); hideObject(wp[i]); }
		pt[10] = 1;
		setObjectImage(black[5], "Images/Red2.jpg"); locateObject(piece, GAMEROOM, k6, l2);
		showObject(pt[2]); showObject(pt[14]); showObject(wp[6]);
		j++;
	}
	else if (Object == pt[11]) {
		for (i = 0; i < 15; i++) { hideObject(pt[i]); hideObject(wp[i]); }
		pt[11] = 1;
		setObjectImage(black[6], "Images/Red2.jpg"); locateObject(piece, GAMEROOM, k1, l3);
		showObject(pt[0]); showObject(pt[7]); showObject(wp[9]); showObject(wp[4]);
		j++;
	}
	else if (Object == pt[12]) {
		for (i = 0; i < 15; i++) { hideObject(pt[i]); hideObject(wp[i]); }
		pt[12] = 1;
		setObjectImage(white[6], "Images/Red2.jpg"); locateObject(piece, GAMEROOM, k2, l3);
		showObject(pt[1]); showObject(pt[8]); showObject(wp[8]); showObject(wp[10]); showObject(wp[5]);
		j++;
	}
	else if (Object == pt[13]) {
		for (i = 0; i < 15; i++) { hideObject(pt[i]); hideObject(wp[i]); }
		pt[13] = 1;
		setObjectImage(black[7], "Images/Red2.jpg"); locateObject(piece, GAMEROOM, k3, l3);
		showObject(pt[5]); showObject(pt[9]); showObject(pt[0]); showObject(pt[2]); showObject(wp[2]); showObject(wp[6]); showObject(wp[9]); showObject(wp[11]);
		j++;
	}
	else if (Object == pt[14]) {
		for (i = 0; i < 15; i++) { hideObject(pt[i]); hideObject(wp[i]); }
		pt[14] = 1;
		setObjectImage(white[7], "Images/Red2.jpg"); locateObject(piece, GAMEROOM, k4, l3);
		showObject(pt[6]); showObject(pt[1]); showObject(pt[3]); showObject(pt[10]); showObject(wp[7]); showObject(wp[3]); showObject(wp[10]); showObject(wp[12]);
		j++;
	}
	else if (Object == wp[0]) {
		for (i = 0; i < 15; i++) { hideObject(pt[i]); hideObject(wp[i]); }
		wp[0] = 1;
		setObjectImage(black[8], "Images/Red2.jpg"); locateObject(piece, GAMEROOM, k5, l3);
		showObject(pt[7]); showObject(pt[2]); showObject(pt[4]); showObject(wp[4]); showObject(wp[11]); showObject(wp[13]);
		j++;
	}
	else if (Object == wp[1]) {
		for (i = 0; i < 15; i++) { hideObject(pt[i]); hideObject(wp[i]); }
		wp[1] = 1;
		setObjectImage(white[8], "Images/Red2.jpg"); locateObject(piece, GAMEROOM, k6, l3);
		showObject(pt[3]); showObject(pt[8]); showObject(wp[5]); showObject(wp[12]);
		j++;
	}
	else if (Object == wp[2]) {
		for (i = 0; i < 15; i++) { hideObject(pt[i]); hideObject(wp[i]); }
		wp[2] = 1;
		setObjectImage(white[9], "Images/Red2.jpg"); locateObject(piece, GAMEROOM, k1, l4);
		showObject(pt[6]); showObject(pt[13]); showObject(wp[10]);
		j++;
	}
	else if (Object == wp[3]) {
		for (i = 0; i < 15; i++) { hideObject(pt[i]); hideObject(wp[i]); }
		wp[3] = 1;
		setObjectImage(black[9], "Images/Red2.jpg"); locateObject(piece, GAMEROOM, k2, l4);
		showObject(pt[5]); showObject(pt[7]); showObject(pt[14]); showObject(wp[11]);
		j++;
	}
	else if (Object == wp[4]) {
		for (i = 0; i < 15; i++) { hideObject(pt[i]); hideObject(wp[i]); }
		wp[4] = 1;
		setObjectImage(white[10], "Images/Red2.jpg"); locateObject(piece, GAMEROOM, k3, l4);
		showObject(pt[11]); showObject(pt[8]); showObject(pt[6]); showObject(wp[8]); showObject(wp[0]); showObject(wp[12]);
		j++;
	}
	else if (Object == wp[5]) {
		for (i = 0; i < 15; i++) { hideObject(pt[i]); hideObject(wp[i]); }
		wp[5] = 1;
		setObjectImage(black[10], "Images/Red2.jpg"); locateObject(piece, GAMEROOM, k4, l4);
		showObject(pt[7]); showObject(pt[9]); showObject(pt[12]); showObject(wp[8]); showObject(wp[9]); showObject(wp[1]); showObject(wp[13]);
		j++;
	}
	else if (Object == wp[6]) {
		for (i = 0; i < 15; i++) { hideObject(pt[i]); hideObject(wp[i]); }
		wp[6] = 1;
		setObjectImage(white[11], "Images/Red2.jpg"); locateObject(piece, GAMEROOM, k5, l4);
		showObject(pt[13]); showObject(pt[8]); showObject(pt[10]); showObject(wp[10]);
		j++;
	}
	else if (Object == wp[7]) {
		for (i = 0; i < 15; i++) { hideObject(pt[i]); hideObject(wp[i]); }
		wp[7] = 1;
		setObjectImage(black[11], "Images/Red2.jpg"); locateObject(piece, GAMEROOM, k6, l4);
		showObject(pt[14]); showObject(pt[9]);  showObject(wp[11]);
		j++;
	}
	else if (Object == wp[8]) {
		for (i = 0; i < 15; i++) { hideObject(pt[i]); hideObject(wp[i]); }
		wp[8] = 1;
		setObjectImage(black[12], "Images/Red2.jpg"); locateObject(piece, GAMEROOM, k1, l5);
		showObject(pt[12]); showObject(wp[4]);
		j++;
	}
	else if (Object == wp[9]) {
		for (i = 0; i < 15; i++) { hideObject(pt[i]); hideObject(wp[i]); }
		wp[9] = 1;
		setObjectImage(white[12], "Images/Red2.jpg"); locateObject(piece, GAMEROOM, k2, l5);
		showObject(pt[11]); showObject(pt[13]); showObject(wp[5]);
		j++;
	}
	else if (Object == wp[10]) {
		for (i = 0; i < 15; i++) { hideObject(pt[i]); hideObject(wp[i]); }
		wp[10] = 1;
		setObjectImage(black[13], "Images/Red2.jpg"); locateObject(piece, GAMEROOM, k3, l5);
		showObject(pt[12]); showObject(pt[14]); showObject(wp[2]); showObject(wp[6]);
		j++;
	}
	else if (Object == wp[11]) {
		for (i = 0; i < 15; i++) { hideObject(pt[i]); hideObject(wp[i]); }
		wp[11] = 1;
		setObjectImage(white[13], "Images/Red2.jpg"); locateObject(piece, GAMEROOM, k4, l5);
		showObject(pt[13]); showObject(wp[0]); showObject(wp[3]); showObject(wp[7]);
		j++;
	}
	else if (Object == wp[12]) {
		for (i = 0; i < 15; i++) { hideObject(pt[i]); hideObject(wp[i]); }
		wp[12] = 1;
		setObjectImage(black[14], "Images/Red2.jpg"); locateObject(piece, GAMEROOM, k5, l5);
		showObject(pt[14]); showObject(wp[1]); showObject(wp[4]);
		j++;
	}
	else if (Object == wp[13]) {
		for (i = 0; i < 15; i++) { hideObject(pt[i]); hideObject(wp[i]); }
		wp[13] = 1;
		setObjectImage(white[14], "Images/Red2.jpg"); locateObject(piece, GAMEROOM, k6, l5);
		showObject(wp[0]); showObject(wp[5]);
		j++;
	}
	else if (j == 29) {
		showMessage("����ѵ�???\n���ƿͼ� ������ �ٽ� �����ɾ���!");
		enterScene(room3);
		j++;
	}

	else if (Object == restart) {
		showMessage("�� �̻� ����Ʈ�� ������ �� ������ . . .\n���α׷��� �ٽ� ������ ��\n ���� ���� ������� ã�ƿ� ��. . .");
	}

	else if (Object == npc2) {
	showMessage("�����Ŷ� �����ߴµ� ���س³�!\n������ �� ������ ��.\n������ end ��ư�� ������ ���� �� �־�!!!");
}
	else if (Object == end) {
		endGame();
	}
}

	



	




void ObjectCallback1(ObjectID Object, EventID event) {

	if (Object == statue) {
		if (event == EventID::EVENT_KEYPAD) {
			locked = false;
			showMessage("����!!\n���ͼ� ���� ���� ���� �ɾ���!!");
			hideObject(statue);
			showObject(entrance);

		}
	}
}



		
		


int main()
{

	setGameOption(GameOption::GAME_OPTION_INVENTORY_BUTTON, false);
	setGameOption(GameOption::GAME_OPTION_MESSAGE_BOX_BUTTON, false);
	setGameOption(GameOption::GAME_OPTION_ROOM_TITLE, false);

	setMouseCallback(mouseCallback1);
	setObjectCallback(ObjectCallback1);


	//Scene1 ���� ����

	room1 = createScene("��1", "Images/Back1.jpg");
	showMessage("�װ��� ���� ���ʺ��� ���ʷ� ��������,\n ���� �������� ��� ����� ������ ������ ���غ�.\n���ʺ��� ���ʷ� 1A, 2B, 3C, 4D�̰�,\n�� ���� �� ���� '����������'��.");

	door1 = createObject("Images/Door1.png");
	locateObject(door1, room1, 200, 180);
	scaleObject(door1, 0.5f);
	showObject(door1);

	door2 = createObject("Images/Door1.png");
	locateObject(door2, room1, 420, 180);
	scaleObject(door2, 0.5f);
	showObject(door2);

	door3 = createObject("Images/Door1.png");
	locateObject(door3, room1, 860, 180);
	scaleObject(door3, 0.5f);
	showObject(door3);

	door4 = createObject("Images/Door1.png");
	locateObject(door4, room1, 1080, 180);
	scaleObject(door4, 0.5f);
	showObject(door4);

	entrance = createObject("Images/Entrance.png");
	locateObject(entrance, room1, 640, 180);
	scaleObject(entrance, 0.5f);
	hideObject(entrance);

	statue = createObject("Images/Statue.png");
	locateObject(statue, room1, 600, 160);
	scaleObject(statue, 0.5f);
	showObject(statue);

	stair = createObject("Images/Stair.png");
	locateObject(stair, room1, 600, 160);
	scaleObject(stair, 0.5f); //Scene1 ������ �������

	//Scene2 ���� ����
	room2 = createScene("��2", "Images/Back2.jpg");

	gameboard = createObject("Images/Gameboard.png");
	locateObject(gameboard, room2, 600, 160);
	scaleObject(gameboard, 0.5f);
	hideObject(gameboard);


	npc1 = createObject("Images/Npc.png");
	locateObject(npc1, room2, 720, 120);
	scaleObject(npc1, 1.3f);
	showObject(npc1);

	horse = createObject("Images/Horse.png");
	locateObject(horse, room2, 320, 60);
	scaleObject(horse, 1.3f);
	hideObject(horse); //Scene2 ������ �������

	//Scene3 ���� ����




	GAMEROOM = createScene("��3", "Images/3.jpg");

	restart = createObject("Images/restart.png");
	locateObject(restart, GAMEROOM, 1150, 395);
	showObject(restart);

	red1 = createObject("Images/Red1.jpg");
	locateObject(red1, GAMEROOM, 283, 119);
	showObject(red1);

	red2 = createObject("Images/Red2.jpg");

	black[1] = createObject("Images/Black.jpg");
	locateObject(black[1], GAMEROOM, k3, l1);
	showObject(black[1]);

	black[2] = createObject("Images/Black.jpg");
	locateObject(black[2], GAMEROOM, k5, l1);
	showObject(black[2]);

	black[6] = createObject("Images/Black.jpg");
	locateObject(black[6], GAMEROOM, k1, l3);
	showObject(black[6]);

	black[7] = createObject("Images/Black.jpg");
	locateObject(black[7], GAMEROOM, k3, l3);
	showObject(black[7]);

	black[8] = createObject("Images/Black.jpg");
	locateObject(black[8], GAMEROOM, k5, l3);
	showObject(black[8]);

	black[12] = createObject("Images/Black.jpg");
	locateObject(black[12], GAMEROOM, k1, l5);
	showObject(black[12]);

	black[13] = createObject("Images/Black.jpg");
	locateObject(black[13], GAMEROOM, k3, l5);
	showObject(black[13]);

	black[14] = createObject("Images/Black.jpg");
	locateObject(black[14], GAMEROOM, k5, l5);
	showObject(black[14]);

	black[3] = createObject("Images/Black.jpg");
	locateObject(black[3], GAMEROOM, k2, l2);
	showObject(black[3]);

	black[9] = createObject("Images/Black.jpg");
	locateObject(black[9], GAMEROOM, k2, l4);
	showObject(black[9]);

	black[4] = createObject("Images/Black.jpg");
	locateObject(black[4], GAMEROOM, k4, l2);
	showObject(black[4]);

	black[10] = createObject("Images/Black.jpg");
	locateObject(black[10], GAMEROOM, k4, l4);
	showObject(black[10]);

	black[5] = createObject("Images/Black.jpg");
	locateObject(black[5], GAMEROOM, k6, l2);
	showObject(black[5]);

	black[11] = createObject("Images/Black.jpg");
	locateObject(black[11], GAMEROOM, k6, l4);
	showObject(black[11]);

	white[0] = createObject("Images/White.jpg");
	locateObject(white[0], GAMEROOM, 411, 119);
	showObject(white[0]);

	white[1] = createObject("Images/White.jpg");
	locateObject(white[1], GAMEROOM, 669, 119);
	showObject(white[1]);

	white[2] = createObject("Images/White.jpg");
	locateObject(white[2], GAMEROOM, 925, 119);
	showObject(white[2]);

	white[6] = createObject("Images/White.jpg");
	locateObject(white[6], GAMEROOM, 411, 375);
	showObject(white[6]);

	white[7] = createObject("Images/White.jpg");
	locateObject(white[7], GAMEROOM, 669, 375);
	showObject(white[7]);

	white[8] = createObject("Images/White.jpg");
	locateObject(white[8], GAMEROOM, 925, 375);
	showObject(white[8]);

	white[12] = createObject("Images/White.jpg");
	locateObject(white[12], GAMEROOM, 411, 631);
	showObject(white[12]);

	white[13] = createObject("Images/White.jpg");
	locateObject(white[13], GAMEROOM, 669, 631);
	showObject(white[13]);

	white[14] = createObject("Images/White.jpg");
	locateObject(white[14], GAMEROOM, 925, 631);
	showObject(white[14]);

	white[3] = createObject("Images/White.jpg");
	locateObject(white[3], GAMEROOM, 283, 247);
	showObject(white[3]);

	white[4] = createObject("Images/White.jpg");
	locateObject(white[4], GAMEROOM, 539, 247);
	showObject(white[4]);

	white[5] = createObject("Images/White.jpg");
	locateObject(white[5], GAMEROOM, 795, 247);
	showObject(white[5]);

	white[9] = createObject("Images/White.jpg");
	locateObject(white[9], GAMEROOM, 283, 503);
	showObject(white[9]);

	white[10] = createObject("Images/White.jpg");
	locateObject(white[10], GAMEROOM, 539, 503);
	showObject(white[10]);

	white[11] = createObject("Images/White.jpg");
	locateObject(white[11], GAMEROOM, 795, 503);
	showObject(white[11]);

	piece = createObject("Images/Knight.png");
	locateObject(piece, GAMEROOM, k1, l1);
	showObject(piece);

	pt[0] = createObject("Images/pt.png");
	locateObject(pt[0], GAMEROOM, k2, l1);
	hideObject(pt[0]);

	pt[1] = createObject("Images/pt.png");
	locateObject(pt[1], GAMEROOM, k3, l1);
	hideObject(pt[1]);

	pt[2] = createObject("Images/pt.png");
	locateObject(pt[2], GAMEROOM, k4, l1);
	hideObject(pt[2]);

	pt[3] = createObject("Images/pt.png");
	locateObject(pt[3], GAMEROOM, k5, l1);
	hideObject(pt[3]);

	pt[4] = createObject("Images/pt.png");
	locateObject(pt[4], GAMEROOM, k6, l1);
	hideObject(pt[4]);

	pt[5] = createObject("Images/pt.png");
	locateObject(pt[5], GAMEROOM, k1, l2);
	hideObject(pt[5]);

	pt[6] = createObject("Images/pt.png");
	locateObject(pt[6], GAMEROOM, k2, l2);
	hideObject(pt[6]);

	pt[7] = createObject("Images/pt.png");
	locateObject(pt[7], GAMEROOM, k3, l2);
	showObject(pt[7]);

	pt[8] = createObject("Images/pt.png");
	locateObject(pt[8], GAMEROOM, k4, l2);
	hideObject(pt[8]);

	pt[9] = createObject("Images/pt.png");
	locateObject(pt[9], GAMEROOM, k5, l2);
	hideObject(pt[9]);

	pt[10] = createObject("Images/pt.png");
	locateObject(pt[10], GAMEROOM, k6, l2);
	hideObject(pt[10]);

	pt[11] = createObject("Images/pt.png");
	locateObject(pt[11], GAMEROOM, k1, l3);
	hideObject(pt[11]);

	pt[12] = createObject("Images/pt.png");
	locateObject(pt[12], GAMEROOM, k2, l3);
	showObject(pt[12]);

	pt[13] = createObject("Images/pt.png");
	locateObject(pt[13], GAMEROOM, k3, l3);
	hideObject(pt[13]);

	pt[14] = createObject("Images/pt.png");
	locateObject(pt[14], GAMEROOM, k4, l3);
	hideObject(pt[14]);

	wp[0] = createObject("Images/pt.png");
	locateObject(wp[0], GAMEROOM, k5, l3);
	hideObject(wp[0]);

	wp[1] = createObject("Images/pt.png");
	locateObject(wp[1], GAMEROOM, k6, l3);
	hideObject(wp[1]);

	wp[2] = createObject("Images/pt.png");
	locateObject(wp[2], GAMEROOM, k1, l4);
	hideObject(wp[2]);

	wp[3] = createObject("Images/pt.png");
	locateObject(wp[3], GAMEROOM, k2, l4);
	hideObject(wp[3]);

	wp[4] = createObject("Images/pt.png");
	locateObject(wp[4], GAMEROOM, k3, l4);
	hideObject(wp[4]);

	wp[5] = createObject("Images/pt.png");
	locateObject(wp[5], GAMEROOM, k4, l4);
	hideObject(wp[5]);

	wp[6] = createObject("Images/pt.png");
	locateObject(wp[6], GAMEROOM, k5, l4);
	hideObject(wp[6]);

	wp[7] = createObject("Images/pt.png");
	locateObject(wp[7], GAMEROOM, k6, l4);
	hideObject(wp[7]);

	wp[8] = createObject("Images/pt.png");
	locateObject(wp[8], GAMEROOM, k1, l5);
	hideObject(wp[8]);

	wp[9] = createObject("Images/pt.png");
	locateObject(wp[9], GAMEROOM, k2, l5);
	hideObject(wp[9]);

	wp[10] = createObject("Images/pt.png");
	locateObject(wp[10], GAMEROOM, k3, l5);
	hideObject(wp[10]);

	wp[11] = createObject("Images/pt.png");
	locateObject(wp[11], GAMEROOM, k4, l5);
	hideObject(wp[11]);

	wp[12] = createObject("Images/pt.png");
	locateObject(wp[12], GAMEROOM, k5, l5);
	hideObject(wp[12]);

	wp[13] = createObject("Images/pt.png");
	locateObject(wp[13], GAMEROOM, k6, l5);
	hideObject(wp[13]);

	
	//Scene3 ���� ��

	//Scene4
	room3 = createScene("��4", "Images/Back2.jpg");

	npc2 = createObject("Images/Npc2.png");
	locateObject(npc2, room3, 720, 120);
	scaleObject(npc2, 1.3f);
	showObject(npc2);

	end = createObject("Images/end.png");
	locateObject(end, room3, 100, 395);
    showObject(end);




	startGame(room1);
}
