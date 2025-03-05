END = 5000000
primes = {2}

for num = 3,END do
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
