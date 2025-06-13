function bucket_vals  = bucket_values(edges, fft_vals)

bucket_vals = zeros(1, length(edges)-1);

for i = 1:length(edges)-1
    range = abs(fft_vals(edges(i):edges(i+1)-1));
    bucket_vals(i) = max(range);
end

% fs = 44100;
% fft_len = 1024;
% freq_edges = (edges - 1) * fs / fft_len;
% freqs = (freq_edges(1:end-1) + freq_edges(2:end)) / 2;

end
