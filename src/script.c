/*
������on_init
���ܣ�ϵͳִ�г�ʼ��
*/
void on_init()
{	
}

/*
������on_systick
���ܣ�����ִ������(1��/��)
*/
void on_systick()
{
}

/*
������on_timer
���ܣ���ʱ����ʱ֪ͨ
������timer_id����ʱ��ID
��ز�����
������ʱ����start_timer(timer_id,timeout,countdown,repeat)
            timer_id-��ʱ��ID��0~9��
			timeout-��ʱʱ�䣬���뵥λ
			countdown-0˳��ʱ��1����ʱ������sys.timer������ݼ�
			repeat-�ظ�������0��ʾ����
ֹͣ��ʱ����stop_timer(timer_id)
��ʱ����ֵ��sys.timer0~sys.timer9�����뵥λ
*/
void on_timer(int timer_id)
{	
}

/*
������on_variant_upate
���ܣ�����ͨ�ŵ��±�������ʱ��ִ�д˺���
*/
void on_variant_upate()
{
  
}

/*
������on_control_notify
���ܣ��ؼ�ֵ����֪ͨ
������screen_id������ID
������control_id���ؼ�ID
������value����ֵ
*/
void on_control_notify(int screen_id,int control_id,int value)
{
}

/*
������on_screen_change
���ܣ������л�֪ͨ����ǰ����ID�����仯ʱִ�д˺���
������screen_id����ǰ����ID
*/
void on_screen_change(int screen_id)
{

}

