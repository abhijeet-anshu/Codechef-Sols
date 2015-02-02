while True:
	try: num =  int(raw_input())
	except: break
	print num*2-2 if num is not 1 else 1