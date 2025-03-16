end_see_primes = ...
primes = {2}

for num = 3,end_see_primes do
	prime = true

	for _, div in pairs(primes) do
		if (div <= math.sqrt(num)) then
			if (num % div == 0) then
				prime = False
				break
			end
		else
			break
		end
	end

	if (prime) then
		table.insert(primes, num)
	end
end

print(primes[#primes])
