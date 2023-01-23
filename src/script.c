/*
函数：on_init
功能：系统执行初始化
*/
void on_init()
{	
}

/*
函数：on_systick
功能：定期执行任务(1秒/次)
*/
void on_systick()
{
}

/*
函数：on_timer
功能：定时器超时通知
参数：timer_id，定时器ID
相关操作：
启动定时器：start_timer(timer_id,timeout,countdown,repeat)
            timer_id-定时器ID（0~9）
			timeout-超时时间，毫秒单位
			countdown-0顺计时，1倒计时，决定sys.timer递增或递减
			repeat-重复次数，0表示无穷
停止定时器：stop_timer(timer_id)
定时器数值：sys.timer0~sys.timer9，毫秒单位
*/
void on_timer(int timer_id)
{	
}

/*
函数：on_variant_upate
功能：串口通信导致变量更新时，执行此函数
*/
void on_variant_upate()
{
  
}

/*
函数：on_control_notify
功能：控件值更新通知
参数：screen_id，画面ID
参数：control_id，控件ID
参数：value，新值
*/
void on_control_notify(int screen_id,int control_id,int value)
{
}

/*
函数：on_screen_change
功能：画面切换通知，当前画面ID发生变化时执行此函数
参数：screen_id，当前画面ID
*/
void on_screen_change(int screen_id)
{

}

