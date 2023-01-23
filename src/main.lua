function on_init()
end

function on_systick()
end

function on_timer(timer_id)
end

function on_control_notify(screen,control,value)
    -- Main menu 
	if control==29 then set_variant("MainEnterKey", 8)  -- Home
	elseif control == 30 then set_variant("MainEnterKey", 1) -- Files
	elseif control == 31 then set_variant("MainEnterKey", 2) -- Adjust
	elseif control == 32 then set_variant("MainEnterKey", 3) -- Settings
	end
	if screen == 2 and control == 50 then
	  set_variant("SelectFileKey", value+1) -- Select file, the fw indexes it from 1
	end
end

function on_uart_recv_data(packet)

end

function fill_files()
 record_clear(2,50);
   files = {}
	for i=0,19 do
       table.insert(files, get_variant("FILE_TEXT_VP[" .. i .. "]"))
    end 
    -- files = {"20mm hollow cube", "Bed leveling test"}
     for n, name in ipairs(files) do
		record_add(2, 50, ""..name)
     end
end

function on_screen_change(screen)
 if screen == 2 then -- file selector
   fill_files()
 end
end

