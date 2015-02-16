def rel_fn (n, num):
	num += n + 1
	n += 1
	n *= n
	if n==num: return 0
	if n<num: return -1
	return 1

def testBin (num):
	num -= 1
	if num%3!=0:
		return False
	num /= 3
	left = 0
	right = 100000
	while left<=right:
		mid = (left+right)/2
		# print 'testing with ', mid
		val = rel_fn(mid, num)
		if val==0: return True
		if val==1: right = mid-1
		else: left = mid+1
	return False


while True:
	num = int(str(raw_input()))
	if num==-1: break
	print "Y" if testBin(num) else "N"
