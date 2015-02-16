t = int(raw_input())
while True:
	if t==0:
		break
	t = t-1
	ab = (raw_input()).split()
	abc = ''.join(sorted(ab[0]))
	cba = ''.join(sorted(ab[1]))
	print 'NO' if abc!=cba else 'YES'