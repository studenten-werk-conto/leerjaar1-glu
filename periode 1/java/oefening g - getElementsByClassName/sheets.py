import gspread

gc = gspread.service_account(filename="token.json")
sh = gc.open_by_key("17gAWB0cG2QLxC5gL0KbQHoX5nJaw8LQUm-p2BuzgBJE")
worksheet = sh.sheet1

# res = worksheet.get_all_records ()
# res = worksheet.get_all_values ()
# res = worksheet.col_values (1) 
# res = worksheet.col_get('c3')
# user = ["susan", 25, "sydney"] 
# worksheet.append_row(user)
# worksheet.update_cell(6,2, 28)

res = worksheet.get_all_records()
print(res)